#include<iostream>
using namespace std;
bool subsetsum(int *arr,int sum,int n)
{
	bool**dp=new bool*[n+1];
	for(int i=0;i<=n;i++)
	{
		dp[i]=new bool[sum+1];
	}
		for(int i=0;i<=sum;i++)
		{
			dp[0][i]=false;
		}
		for(int i=0;i<=n;i++)
		{
			dp[i][0]=true;
		}
	
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=sum;j++)
			{
				dp[i][j]=dp[i-1][j];
				if(j>=arr[i-1])
				{
					dp[i][j]=dp[i][j]||dp[i-1][j-arr[i-1]];
				}
			}
		}
		bool ans=dp[n][sum];
		for(int i=0;i<=n;i++)
		{
			delete[]dp[i];
		}
		delete[]dp;
		return ans;
	
}
int main()
{int n;
cin>>n;
int*arr=new int[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int sum;
cin>>sum;
if(subsetsum(arr,sum,n))
{cout<<"YES"<<endl;
	}
		
	return 0;
}
