#include<iostream>
#include<string>
using namespace std;
int main(){
	string input="abc";
	//cout<<input.substr(0,1)<<endl;
	cout<<input.substr(0,0)<<endl;
	cout<<input.substr(0,2)<<endl;
	cout<<input.substr(1)<<endl;
	return 0;
}
