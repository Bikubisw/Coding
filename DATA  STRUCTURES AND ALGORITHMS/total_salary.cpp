#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int basic;
	char c;
	cin>>basic>>c;
	double hra=0.2*basic;
	double da=0.5*basic;
	double pf=0.11*basic;
	int allow;
	if(c=='A')
	{
		allow=1700;
	}
	else if(c=='B')
	{
		allow=1500;
	}
	else{
		allow=1300;
	}
	double sum=(basic+hra+da+allow)-pf;
	cout<<llround(sum);
	return 0;
}
