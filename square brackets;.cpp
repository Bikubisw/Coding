#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d;
	cin>>d;
	while(d--)
	{
		int n,k,x;
		cin>>n>>k;
		bool *a=new bool[2*n]
		for(int i=0;i<2*n;i++)
			{
			a[i]=false;	
			}
		
		for(int i=0;i<k;i++)
		{
		cin>>x;
		a[x-i]=true;	
		}
		
		
	}
	return 0;
}
