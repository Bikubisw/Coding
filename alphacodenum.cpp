#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007 
long long  num_codes(string s,int n,long long int  arr[])
{
	if(n==1)
	{
		return 1;
	}
	if(n==0)
	{
		return 1;
	}
	if(arr[n]>0)
	
	{
		return arr[n];
	}

	long long  output=num_codes(s,n-1,arr);
	if(s[n-2]*10+s[n-1]<=26)
	{
		output+=num_codes(s,n-2,arr);
		
	}
	arr[n]=output;
	return (output%MOD);
	
}
int main()
{
	string s;
	cin>>s;
	
	int n=s.size();
	long long int *arr=new long long int [n+1];
	
long long ans=num_codes(s,n,arr);
cout<<ans<<endl;
	
	return 0;
	
}
