#include<iostream>
using namespace std;
void printSubsetSumToKhelper(int*input,int n,int output[],int m,int k){
	if(n==0){
		if(k==0){
			for(int i=0;i<m;i++){
				cout<<output[i]<<" ";
			}
			cout<<endl;
		}
		return;
	}
	int smalloutput[1000];
	printSubsetSumToKhelper(input+1,n-1,output,m,k);
	if(k>0)
{

		int i=0;
		for(;i<m;i++){
			smalloutput[i]=output[i];
		}
		smalloutput[i]=input[0];
		printSubsetSumToKhelper(input+1,n-1,smalloutput,m+1,k-input[0]);
	}
	
}
void printSubsetSumToK(int*input,int n,int k){
	int output[1000];
	printSubsetSumToKhelper(input,n,output,0,k);
}
int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}

