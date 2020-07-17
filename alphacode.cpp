#include<bits/stdc++.h>
using namespace std;

int num_codes(int *n,int size,int *arr)
{
	if(size==1)
	{
		return 1;
		
	}
	if(size==0)
	{
		return 1;
	}
	if(arr[size]>0)
	{
		return arr[size];
	}
	int output=num_codes(n,size-1,arr);
	if(n[size-2]*10+n[size-1]<=26)
	{
		output+=num_codes(n,size-2,arr);
	}
	arr[size]=output;
	
	return output;
	
}
int main()
{
	int size;
	cin>>size;
	int n[size];
	for(int i=0;i<size;i++)
	{
		cin>>n[i];
	}
	int *arr=new int[size+1];
	int ans=num_codes(n,size,arr);
	cout<<ans<<endl;
	
	
	return 0;
}
