*#include<bits/stdc++.h>
using namespace std;
int mincost(int **arr,int n,int p,int mask)
{
	for(int j=0;j<n;j++)
	{
		if()
	}
}
int main()
{
	int n;
	cin>>n;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<mincost(arr,n,0,0)<<endl;
	for(int i=0;i<n;i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	return 0;
	
}



