#include<bits/stdc++.h>
#include<bits/move.h>
using namespace std;
void winstra(int a[],int n);
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	winstra(a,n);

	
	
	return 0;
}
void winstra(int a[],int n)
{
	int nswap=0;
		for(int i=n-1;i>0;i--)
	{
		if(a[i]==i+1)
		{
			continue;
		}
		else if(a[i]!=i+1)
		{
			if(a[i-1]==i+1&&(i-1)>=0)
			{
				
				nswap++;
				swap(a[i],a[i-1]);
			}
			else if(a[i-2]==i+1&&(i-2)>=0)
			{
				nswap+=2;
				a[i-2]=a[i-1];
				a[i-1]=a[i];
				a[i]=i+1;
				}
			else
			{
				cout<<"NO"<<endl;
				return;
				
			}
			}
	}
	cout<<"YES"<<endl<<nswap<<endl;
	return;
	
}
