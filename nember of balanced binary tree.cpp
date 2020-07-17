#include<bits/stdc++.h>
using namespace std;
int numberofbts(int h)
{
	if(h==0||h==1)
	{
		return 1;
	}
	int m=pow(10,9)+7;
	int x=numberofbts(h-1);
	int y=numberofbts(h-2);
	
	long res1=(long)x*x;
	long res2=(long)x*y*2;
	
	int ans1=(int)(res1%m);
	int ans2=(int)(res2%m);
	
	int ans3=(ans1+ans2)%m;
	return ans3;
}
int main()
{
	int h;
	cin>>h;
	int ans3=numberofbts(h);
	cout<<ans3<<endl;
	
	return 0;
}
