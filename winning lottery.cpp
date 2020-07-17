#include<iostream>
using namespace std;
string findsmallnum(int sum,int dig);
int main()
{
	int sum,dig;
	cin>>sum>>dig;
	cout<<findsmallnum(sum,dig)<<endl;
	return 0;
}
string findsmallnum(int sum,int dig)
{
	int dp[dig];
	sum=sum-1;
	for(int i=dig-1;i>0;i--)
	{
		if(sum>9)
		{
			dp[i]=9;
			sum=sum-9;
			
		}
		else
		{
			dp[i]=sum;
			sum=0;
		}
	}
	dp[0]=sum+1;
	string e="";
	for(int i=0;i<dig;i++)
	{
		
	
	e=e+char('0'+dp[i]);
	}
	return e;
}

