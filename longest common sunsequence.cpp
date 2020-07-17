#include<bits/stdc++.h>
using namespace std;
int lcs2helper(string a,string b,int m,int n,int **dp)
{if(m==0||n==0)
	{
		return 0;
	}
	if(dp[m][n]>-1)
{
	return dp[m][n];
}
int ans;
	if(a[0]==b[0])
	{
		ans=1+lcs2helper(a.substr(1),b.substr(1),m-1,n-1,dp);
		}
	else
	{
		int ans1=lcs2helper(a.substr(1),b,m-1,n,dp);
		int ans2=lcs2helper(a,b.substr(1),m,n-1,dp);
		ans=max(ans1,ans2);
		}
dp[m][n]=ans;
return ans;
}
int lcs2(string s1,string s2)
{
	int m=s1.size();
	int n=s2.size();
	int **dp=new int*[m+1];
	for(int i=0;i<=m;i++)
	{
		dp[i]=new int[n+1];
		for(int j=0;j<=n;j++)
		{
			dp[i][j]=-1;
		}
	}
	int ans=lcs2helper(s1,s2,m,n,dp);
	for(int i=0;i<=m;i++)
	{
		delete[]dp[i];
	}
	delete[]dp;
	return ans;
}
int main()
{
	string a;
	string b;
	cin>>a;
	cin>>b;
	
	cout<<lcs2(a,b)<<endl;
	  	
	return 0;
	
}
