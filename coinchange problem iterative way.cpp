#include<bits/stdc++.h>
using namespace std;
int coinchange(int *d,int numd,int value)
{
	
}
int main()
{
	int numd;
	cin>>numd;
	int *d=new int[numd];
	for(int i=0;i<numd;i++)
	{
		cin>>d[i];
	}
	int value;
	cin>>value;
	int ans=coinchange(d,numd,value);
	cout<<ans<<endl;
	return 0;
}
