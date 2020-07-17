#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cost=0;
	cin>>n;
	char s[n],t[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		cin>>t[i];
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]!=t[i])
		{
			if(s[i]!=s[i+1]&&s[i+1]!=t[i+1])
			{
				cost++;
				i=i+2;
			}
			else
			{
				cost++;
				i++;
			}
		}
		
	}
	cout<<cost<<endl;
	return 0;
}
