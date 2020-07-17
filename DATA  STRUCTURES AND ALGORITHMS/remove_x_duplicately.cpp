#include<iostream>
#include<cstring>
using namespace std;
void removehelper(char input[],int start){
	if(input[start]=='\0'){
		return;
	}
	removehelper(input,start+1);
	if(input[start]=='x'){
		int len=strlen(input);
		int i;
		for(i=start+1;i<len;i++){
			input[i-1]=input[i];
		}
		input[i-1]='\0';
		
	}
	
}
void remove(char input[]){
	return removehelper(input,0);
}
int main(){
	char input[100];
	cin.getline(input,100);
	remove(input);
	cout<<input<<endl;
	return 0;
}
