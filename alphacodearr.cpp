#include<bits/stdc++.h>
using namespace std;

int num_codes(int *n,int size)
{
	if(size==1)
	{
		return 1;
		
	}
	if(size==0)
	{
		return 1;
	}

	int output=num_codes(n,size-1);
	if(n[size-2]*10+n[size-1]<=26)
	{
		output+=num_codes(n,size-2);
	}

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

	int ans=num_codes(n,size);
	cout<<ans<<endl;
	
	
	return 0;
}
