#include<iostream>
using namespace std;
#include<string>
int main(){
	string s;
	cin>>s;
	int j=0;
	while(j<s.length()-1){
		cout<<s.substr(j)<<endl;
		j++;
	}
	return 0;
}
