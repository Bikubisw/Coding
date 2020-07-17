#include<iostream>
#include<string.h>
using namespace std;
void replacepi(char*input){
	if(input[0]=='\0'){
		return ;
	}
	replacepi(input+1);
	if(input[0]=='p'&&input[1]=='i'){
		for(int i=strlen(input);i>=2;i--){
			input[i+2]=input[i];
		}
		input[0]='3';
		input[1]='.';
		input[2]='1';
		input[3]='4';
	}
}
int main(){
	char input[1000];
	cin.getline(input,1000);
	replacepi(input);
	cout<<input<<endl;
	return 0;
}
