#include<bits/stdc++.h>
using namespace std;
int totalcost(char s[],int n,int x,int y);
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	char s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];

	}
	int ans1=totalcost(s,n,x,y);
	cout<<ans1<<endl;
}
int totalcost(char s[],int n,int x,int y)
{
	int nog=0,ans;
	if(s[0]=='0')
	{
		nog++;
	}

	for(int i=1;i<n;i++)
	
	{if(s[i]=='0'&&s[i-1]=='1')
		{
			nog++;
		}
		 
		}
		if(nog==0)
		{
			return 0;
		}
		else if(x<y)
		{
		 ans=(nog-1)*x+y;	
		}
		else 
		{
			ans=nog*y;
		}
	

	return ans;
	}

	
	
	
	


