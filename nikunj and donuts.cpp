#include<bits/stdc++.h>

using namespace std;
long long input[100];
int main()
{
	int size;
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cin>>input[i];
	}
	sort(input, input+size, greater<int>());
	long long ans=0;
	for(int i=0;i<size;i++)
    {
	ans=ans+(input[i]*(1LL<<i));
		
  }
	cout<<ans<<endl;
	
	return 0;
	
}
