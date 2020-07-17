#include<bits/stdc++.h>
using namespace std;
int maxvaluehelper(int *wt,int n,int*value,int maxwei,int**dp)
{
	if(n==0||maxwei==0)
	{
		return 0;
	}
if(dp[n][maxwei]>-1)
{
	return dp[n][maxwei];
}
 int ans1;
if(wt[n-1]<=maxwei)
	{
		ans1=value[n-1]+maxvaluehelper(wt,n-1,value,maxwei-wt[n-1],dp);
	}
	
	 int ans2=maxvaluehelper(wt,n-1,value,maxwei,dp);
	 int ans= max(ans1,ans2);
	dp[n][maxwei]=ans;
	return ans;

}
int maxvalue(int *wt,int n,int*value,int maxwei)
{
	int**dp=new int*[n+1];
	for(int i=0;i<=n;i++)
	{dp[i]=new int[maxwei+1];
		for(int w=0;w<=maxwei;w++)
		{
			dp[i][w]=-1;
		}
	}
	int ans=maxvaluehelper(wt,n,value,maxwei,dp);
	for(int i=0;i<=n;i++)
	{
		delete[]dp[i];
	}
	delete[]dp;
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int*wt=new int[n];
	int*value=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>value[i];
	}
	int maxwei;
	cin>>maxwei;
	cout<<maxvalue(wt,n,value,maxwei)<<endl;
	delete[]wt;
	delete[]value;
     return 0;
}

