#include<iostream>
using namespace std;
int main()
{
	int x,n;
	cin>>x>>n;
	int i=1;
	int pow=1;
	while(i<=n)
	{
		pow=pow*x;
		i=i+1;
	}
	cout<<pow<<endl;
	return 0;
}
