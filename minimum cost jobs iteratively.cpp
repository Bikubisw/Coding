#include<bits/stdc++.h>
using namespace std;
int mincost(int **arr,int n)
{
	int*dp=new int[1<<n];
	for(int i=0;i<(1<<n);i++)
	{
		dp[i]=INT_MAX;
	}
	dp[0]=0;
	for(int mask=0;mask<((1<<n)-1);mask++)
	{
		int temp=mask;
		int k=0;
		while(temp>0)
		{
			if(temp%2==1)
			{
				k++;
			}
			temp=temp/2;
		}
		for(int j=0;j<n;j++)
		{
			if(!(mask&(1<<j)))
			{
				dp[mask|(1<<j)]=min(dp[mask|(1<<j)],dp[mask]+arr[k][j]);
			}
		}
	}
	return dp[(1<<n)-1];
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
	cout<<mincost(arr,n)<<endl;
	for(int i=0;i<n;i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	return 0;
	
}

