#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int even_sum=0;
	int odd_sum=0;
	int num=n;
	while(num!=0)
	{
		int rem=num%10;
		if(rem%2==0)
		{
			even_sum=even_sum+rem;
			
	}
	else
	{
		odd_sum=odd_sum+rem;
	}
	num=num/10;
	}
	cout<<even_sum<<" "<<odd_sum<<endl;
	return 0;
}
