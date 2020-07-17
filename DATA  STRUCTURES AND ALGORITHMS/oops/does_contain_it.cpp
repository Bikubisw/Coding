#include<iostream>
#include<cstring>
using namespace std;
bool is_present(char input1[],char*input2){
	int m=strlen(input2);
	int n=strlen(input1);
	int j=0;
	for(int i=0;i<n&&j<m;i++){
		if(input2[j]==input1[i]){
			j++;
		}
	}
	return (m==j);
}
int main(){
	char input1[1000];
	char input2[1000];
	cin.getline(input1,1000);
	cin.getline(input2,1000);
	bool ans=is_present(input1,input2);
	if(ans){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}
