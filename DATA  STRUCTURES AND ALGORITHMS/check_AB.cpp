#include<iostream>
using namespace std;
bool checkab(char input[],int startindex){
	if(input[startindex]=='\0'){
		return true;
	}
	if(input[startindex]!='a'){
		return false;
	}
	if(input[startindex+1]!='\0'&&input[startindex+2]!='\0'){
		if(input[startindex+1]=='b'&&input[startindex+2]=='b'){
			return checkab(input,startindex+3);
		}
	}
	return checkab(input,startindex+1);
}
bool checkAB(char input[]){
	return checkab(input,0);
}
int main(){
	char input[100];
	cin>>input;
	bool ans=checkAB(input);
	if(ans){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}
