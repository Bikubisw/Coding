#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int big=arr[n-1]-k;
	int small=arr[0]+k;
	if(small>big)
	{
		swap(small,big);
	}
	for(int i=1;i<n-1;i++)
	{
		int sub=arr[i]-k;
	    int add=arr[i]+k;
		if((sub>=small)||(add<=big))
		{
			continue;
		}
		else if((big-sub)<=(add-small))
		{
			small=sub;
		
	}
	else
	{
		add=big;
	}
	
	}
	int ans=min(arr[n-1]-arr[0],big-small);
	cout<<ans<<endl;
	
	return 0;
}
