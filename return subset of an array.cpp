#include<iostream>
using namespace std;

int subsethelper(int input[],int n,int output[][100])
{
	if(n==0)
	{
		output[0][0]=0;
		return 1;
	}
	int smallsize=subsethelper(input+1,n-1,output);
	for(int i=0;i<smallsize;i++)
	{
		output[i+smallsize][0]=	output[i][0]+1;
			output[i+smallsize][1]=	input[0];
		for(int j=1;j<=output[i][0];j++)
		{
			output[i+smallsize][j+1]=output[i][j];	
		}
		
		
		
		}
return (2*smallsize);
}
int subset(int input[],int n,int output[][100])
{   
subsethelper(input,n,output);

		
	}
int main()
{
	int n;
	cin>>n;
	int input[20];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	int output[100][100];
	int count=subset(input,n,output);
	for(int i=0;i<count;i++)
	{
	
	for(int j=1;j<=output[i][0];j++)
	
	{
cout<<output[i][j]<<" ";
	}
	cout<<endl;
}

}

