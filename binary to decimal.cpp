#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0,sum=0;
	while(n>0)
	{
		int rem=n%10;
		sum=sum+rem*(1<<i);
		n=n/10;
		i++;
	}
	cout<<sum<<endl;
}
