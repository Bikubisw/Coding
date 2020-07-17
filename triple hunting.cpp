#include<iostream>
using namespace std;
int main()
{
	freopen("stdin","r",stdin);
	freopen("stdout","w",stdout);
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if((arr[i]%3)==0)
		{count++;
		
		}
		
		
		
	}
	if(count==0)
	{cout<<"Nothing here!";
	
	}
	else
	{cout<<count<<endl;
	for(int i=0;i<n;i++)
	{
		if((arr[i]%3)==0)
		{
			cout<<i+1<<" ";
		}
	}
		
	}
}
