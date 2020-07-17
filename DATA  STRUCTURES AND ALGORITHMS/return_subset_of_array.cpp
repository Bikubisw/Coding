#include<iostream>
using namespace std;
int subsethelper(int*input,int n,int start,int output[][20]){
	if(start==n){
		output[0][0]=0;
		return 1;
		}
	int smallsize=subsethelper(input,n,start+1,output);
	for(int i=0;i<smallsize;i++){
		output[i+smallsize][0]=output[i][0]+1;
		output[i+smallsize][1]=input[start];
		for(int j=1;j<=output[i][0];j++){
			output[i+smallsize][j+1]=output[i][j];
		}
	}
	return 2*smallsize;
	
}
int subset(int*input,int n,int output[][20]){
	return subsethelper(input,n,0,output);
}
int main(){
	int n;
	cin>>n;
	int*input=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>input[i];
		
	}
	int output[3000][20];
	int size=subset(input,n,output);
	for(int i=0;i<size;i++){
		for(int j=1;j<=output[i][0];j++){
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
