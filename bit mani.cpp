#include<iostream>
using namespace std;
int turnOffFirstSetBit(int n);

int main()
{
	int n;
	cin>>n;
int ans=turnOffFirstSetBit(n);
	cout<<ans<<endl;
	
}
int turnOffFirstSetBit(int n)
{
	int z=n&(n-2);
	return z;
}
