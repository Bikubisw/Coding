#include<iostream>
using namespace std;

void printsubsethelper(int input[],int n,int output[],int m)
{
	if(n==0){
		for(int i=0;i<m;i++)
		{
			cout<<output[i]<<" ";
		}
		cout<<endl;
		return;
	}
	int smalloutput[40];
	printsubsethelper(input+1,n-1,output,m);
	int i=0;
	for(;i<m;i++)
	{
		smalloutput[i]=output[i];
	}
	smalloutput[i]=input[0];
	printsubsethelper(input+1,n-1,smalloutput,m+1);
	
}
void printsubset(int input[],int n){
	int output[1000];
printsubsethelper(input,n,output,0);
}
int main()
{
	int n;
	cin>>n;
	int input[n];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
		
	}
	printsubset(input,n);
}
