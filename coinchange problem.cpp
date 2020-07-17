#include<bits/stdc++.h>
using namespace std;
int coinchange(int n,int*d,int numd,int**output)
{ 

if(n==0)
	{
		return 1;
	}
	if(n<0)
	{
		return 0;
	}
	if(numd==0)
	{
		return 0;
	}
	if(output[n][numd]>-1)
	{
		return output[n][numd];
	}
	int first=coinchange(n-d[0],d,numd,output);
	int second=coinchange(n,d+1,numd-1,output);
	output[n][numd]=first+second;
	return (first+second);
}
int main()
{
	int numd;
	cin>>numd;
	int*d=new int[numd];
	for(int i=0;i<numd;i++)
	{
		cin>>d[i];
	}
	int n;
	cin>>n;
	int **output=new int*[n+1];
	for(int i=0;i<n+1;i++)
	{
	output[i]=new int[n+1];	
	
	for(int j=0;j<numd+1;j++)
	{
		output[i][j]=-1;
	}
}
	int ans=coinchange(n,d,numd,output);
	cout<<ans<<endl;//
	for(int i=0;i<n+1;i++)
	{
		delete[]output[i];
	}
	delete[]output;
	
	return 0;
}

