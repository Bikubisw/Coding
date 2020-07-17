#include<iostream>
#include<cstring>
using namespace std;
void removehelper(char input[]){
	if(input[0]=='\0'){
		return;
	}
	if(input[0]!='x'){
	removehelper(input+1);	
		
}
else{
	int i=1;
	for(;input[i]!='\0';i++){
		input[i-1]=input[i];
	}
	input[i-1]=input[i];
	removehelper(input);
}
	
}

int main(){
	char input[100];
	cin.getline(input,100);
	removehelper(input);
	cout<<input<<endl;
	return 0;
}
