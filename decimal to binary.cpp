#include<iostream>
using namespace std;
int main()
{
	int b[100],n;
	cin>>n;
	int i=0;
	while(n>0)
	{
		b[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<b[j];
	}
	return 0;
}
