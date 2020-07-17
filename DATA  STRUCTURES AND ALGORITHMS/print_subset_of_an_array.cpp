#include<iostream>
using namespace std;
void printsubsetarrayhelper(int*input,int n,int *output,int m){
	if(n==0){
		for(int i=0;i<m;i++){
			cout<<output[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	printsubsetarrayhelper(input+1,n-1,output,m);
	int smalloutput[40];
	int i=0;
	for(;i<m;i++){
		smalloutput[i]=output[i];
	}
	smalloutput[i]=input[0];
	printsubsetarrayhelper(input+1,n-1,smalloutput,m+1);
	
}
void printsubsetarray(int *input,int n){
	int output[1000];
	printsubsetarrayhelper(input,n,output,0);
}
int main(){
	int n;
	cin>>n;
	int*input=new int[n];
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	printsubsetarray(input,n);
	return 0;
}
