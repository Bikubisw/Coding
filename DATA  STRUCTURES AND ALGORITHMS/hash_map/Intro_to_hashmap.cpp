#include<iostream>
using namespace std;
char highest_occuring_character(char input[]){
	int arr[256]={0};
	for(int i=0;input[i]!='\0';i++){
		int index=input[i];
		arr[index]++;
	}
	char ans=input[0];
	int ind=input[0];
	int count=arr[ind];
	for(int i=1;input[i]!='\0';i++){
		int index=input[i];
		if(arr[index]>count){
			count=arr[index];
			ans=input[i];
		}
	}
	return ans;
	
}
int main(){
	char input[1000];
	cin.getline(input,1000);
	cout<<highest_occuring_character(input)<<endl;
	return 0;
	
}
