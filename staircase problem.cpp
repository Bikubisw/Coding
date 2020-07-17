#include<bits/stdc++.h>
using namespace std;
 long staircase(int n,long *arr)
{if(n==0||n==1)
	{
		return 1;
	}
	if(n==2)
	{
	    return 2;
	}
	if(arr[n]>0)
	{
	    return arr[n];
	}
	 long output=staircase(n-1,arr)+staircase(n-2,arr)+staircase(n-3,arr);
	arr[n]=output;
	return output;
    }
int main()
{
	int n;
	cin>>n;
	long*arr=new long[n+2];
	memset(arr,0,sizeof(arr));
	
	long ans=staircase(n,arr);
	cout<<ans<<endl;
}
