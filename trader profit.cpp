#include<bits/stdc++.h>
using namespace std;
int traderprofit(int*arr,int k,int n,int ongoing,int dp[][10][2])
{
	if(n==0)
	{
		return 0;
	}
	if(dp[n][k][ongoing]>-1)
	{
		return dp[n][k][ongoing];
	}
	int ans=traderprofit(arr+1,k,n-1,ongoing,dp);
	if(ongoing)
	{
		int option1=traderprofit(arr+1,k-1,n-1,0,dp)+arr[0];
		ans=max(ans,option1);
	}
	else
	{
		if(k==0)
		{
			ans=0;
		}
		else
		{
			int option2=traderprofit(arr+1,k,n-1,1,dp)-arr[0];
			ans=max(ans,option2);
		}
		
	}
	dp[n][k][ongoing]=ans;
	return ans;
}
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int k,n;
		cin>>k>>n;
		int *arr=new int[31];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int dp[31][10][2];
		for(int i=0;i<31;i++)
		{
			for(int j=0;j<10;j++)
			{ 
			dp[i][j][0]=-1;
			dp[i][j][1]=-1;
			}
		}
		
		int ans=traderprofit(arr,k,n,0,dp);
		cout<<ans<<endl;
	}
	return 0;
}
