#include<iostream>
using namespace std;
bool subsetsum(int *arr,int sum)
{
   bool**dp=new bool*[2];
	for(int i=0;i<=1;i++)
	{
		dp[i]=new bool[sum+1];
	}
		for(int i=0;i<=sum;i++)
		{
			dp[0][i]=false;
		}
		dp[0][0]=true;
	int	flag=1;
	for(int i=1;i<=1;i++)
		{
			for(int j=0;j<=sum;j++)
			{
				dp[flag][j]=dp[flag^1][j];
				if(j>=arr[i-1])
				{
					dp[flag][j]=dp[flag][j]||dp[flag^1][j-arr[i-1]];
				}
			}
			flag=flag^1;
		}
		bool ans=dp[flag^1][sum];
		for(int i=0;i<=1;i++)
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
if(subsetsum(arr,sum))
{cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
		
	return 0;
}
