#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	char input1[100];
	char input2[100];
	cin.getline(input1,100);
	cin.getline(input2,100);
	strncpy(input1,input2,4);
	//strcpy(input1,input2);
	cout<<input1<<endl;
	/*
	if(strcmp(input1,input2)==0){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	//cout<<strlen(input)<<endl;
	
	return 0;*/
}
