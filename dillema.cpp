#include<bits/stdc++.h>
using namespace std;
int findtouches(int pos,int mask,vector<string>&v,int**dp)
{
	if((mask&(mask-1))==0)
	{
		return 0;
	}
	if(pos<0)
	{
		return 1000;
	}
	if(dp[pos][mask]!=INT_MAX)
	{
		return dp[pos][mask];
	}
	int mask1=0;
	int mask2=0;
	int touches=0;
	for(int i=0;i<v.size();i++)
	{
		if(mask&(1<<i))
		{touches++;
			if(v[i][pos]=='0')
			{
				mask1|=(1<<i);
			}
			else
			{
				mask2|=(1<<i);
			}
			
		}
	}
	int ans1=findtouches(pos-1,mask1,v,dp)+findtouches(pos-1,mask2,v,dp)+touches;
	int ans2=findtouches(pos-1,mask,v,dp);
	int ans=min(ans1,ans2);
	dp[pos][mask]=ans;
	return ans;
}
int  minimumTouchesRequired(int n,vector<string>v) {
	int**dp=new int*[v[0].size()];
	for(int i=0;i<v[0].size();i++)
	{dp[i]=new int[1<<(n+1)];
		for(int j=0;j<(1<<(n+1));j++)
		{
			dp[i][j]=INT_MAX;
		}
		
	}
	
	return findtouches(v[0].size()-1,(1<<n)-1,v,dp);
	}
int main()
{
	int n;
	vector<string>v;
	cin>>n;

	for(int i=0;i<n;i++)
	{string a;
		cin>>a;
		v.push_back(a);
		}
		cout << minimumTouchesRequired(n,v) << endl;
	return 0;
}
