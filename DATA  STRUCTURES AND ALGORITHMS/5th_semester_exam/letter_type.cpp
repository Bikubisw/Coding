#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	if(ch>='A'&&ch<='Z'){
		cout<<"Its a uppercase letter"<<endl;
	}
	else if(ch>='a'&&ch<='z'){
		cout<<"Its a lowercase letter"<<endl;
	}
	else if(ch>='0'&&ch<='9'){
		cout<<"Its a number of digit"<<endl;
	}
	else{
		cout<<"Its a special symbol"<<endl;
	}
	return 0;
}
