#include<iostream>
#include<string>
using namespace std;
int editdistance(string s,string t){
	if(s.size()==0 || t.size()==0){
		return 0;
	}
	if(s[0]==t[0]){
		return editdistance(s.substr(1),t.substr(1));
	}
	else{
		int x=1+editdistance(s.substr(1),t);
		int y=1+editdistance(s,t.substr(1));
		int z=1+editdistance(s.substr(1),t.substr(1));
		return min(x,min(y,z));
	}
}
int main(){
	string s;
	string t;
	cin>>s>>t;
	cout<<editdistance(s,t)<<endl;
	return 0;
}
