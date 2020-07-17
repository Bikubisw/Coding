#include<iostream>
using namespace std;
void stringCompression(char input[]){
	int count=1;
	char lastchar=input[0];
	int j=1;
	for(int i=1;input[i]!='\0';i++){
		if(input[i]==lastchar){
			count++;
		}
		else{
			if(count>1){
				input[j]=char(count+48);
				j++;
			}
			input[j]=input[i];
			lastchar=input[i];
			count=1;
			j++;
		}
			}
			if(count>1){
				input[j]=char(count+48);
				j++;
			}
			input[j]='\0';
	} 
int main(){
	char input[1000];
	cin.getline(input,1000);
	stringCompression(input);
	cout<<input<<endl;
	return 0;

}
