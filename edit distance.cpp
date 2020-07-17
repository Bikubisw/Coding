#include<bits/stdc++.h>
using namespace std;
int editdistancehelper(string s1,string s2,int m,int n,int**dp)
{
	if(m==0)
	{
		return n;
	}
	if(n==0)
	{
		return m;
	}
	if(dp[m][n]>-1)
	{
		return dp[m][n];
	}
	int ans;
	if(s1[0]==s2[0])
	{
		ans=editdistancehelper(s1.substr(1),s2.substr(1),m-1,n-1,dp);
	}
	else
	{
		int ans1=1+editdistancehelper(s1.substr(1),s2.substr(1),m-1,n-1,dp);
		int ans2=1+editdistancehelper(s1.substr(1),s2,m-1,n,dp);
		int ans3=1+editdistancehelper(s1,s2.substr(1),m,n-1,dp);
		ans=min(min(ans1,ans2),ans3);
	}
	dp[m][n]=ans;
	return ans;
	}
int editDistance(string s1, string s2){
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
	int ans=editdistancehelper(s1,s2,m,n,dp);
	for(int i=0;i<=m;i++)
	{
		delete[]dp[i];
	}
	delete[]dp;
	return ans;

}
 int main(){
string a;
  string b;
  cin >> a;
  cin >> b;
cout << editDistance(a,b) << endl;
  }



