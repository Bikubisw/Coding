#include<iostream>
using namespace std;
int sumofdigit(int n)
{
	if(n<10)
	{return n;
	
	}
	int smallans=(n%10)+sumofdigit(n/10);
	return smallans;
	}
int main()
{
	int n;
	cin>>n;
	int ans=sumofdigit(n);
	cout<<ans<<endl;
	
}
