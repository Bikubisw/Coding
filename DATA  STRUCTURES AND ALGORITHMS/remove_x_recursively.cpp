#include<iostream>
#include<string.h>
using namespace std;
void removex(char*input){
	if(input[0]=='\0'){
		return ;
	}
	removex(input+1);
	if(input[0]=='x'){
		int i;
		for(i=1;i<strlen(input);i++){
			input[i-1]=input[i];
		}
		input[i-1]='\0';
}
}
int main(){
	char input[100];
    cin.getline(input, 100);
    removex(input);
    cout << input << endl;
}
