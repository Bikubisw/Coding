#include<bits/stdc++.h>
using namespace std;
int maxoccur(string s){
	int count=0;
	int maxcount=-1;
	for(int i=0;i<s.length();i++){
		int j=i+1;
		while(j<s.length()){
			if(s[i]==s[j]){
				break;
			}
			else{
				count++;
			}
			j++;
		}
		if(count>maxcount){
			maxcount=count;
		}
		count=0;
	}
	return maxcount;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	int count=maxoccur(s);
	cout<<count<<endl;
}
}
