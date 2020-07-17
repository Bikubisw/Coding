#include<iostream>
#include<climits>
#include<cstring>
using namespace std;
void min_len_word(char*input,char*output){
	int minstart=-1;
	int minlength=INT_MAX;
	int currentstart=0;
	int i=0;
	int len=strlen(input);
	for(;i<len;i++){
		if(input[i]==' '){
			int currentlengthword=i-currentstart;
			if(currentlengthword<minlength){
				minstart=currentstart;
				minlength=currentlengthword;
			}
			currentstart=i+1;
			}
	}
	if(minstart==-1){
		for(int i=0;i<=len;i++){
			output[i]=input[i];
		}
	}
	else{
		int currentlengthword=i-currentstart;
			if(currentlengthword<minlength){
				minstart=currentstart;
				minlength=currentlengthword;
			}
			currentstart=i+1;
		
	}
	int j=0;
	for(int i=minstart;i<minstart+minlength;i++){
		output[j++]=input[i];
	}
	output[j]='\0';	
	
}
int main(){
	char input[100],output[100];
	cin.getline(input,100);
	min_len_word(input,output);
	cout<<output<<endl;
	return 0;
}
