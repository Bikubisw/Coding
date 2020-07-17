#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int size,ans=0;
	cin>>size;
	int *input=new int[1+size];
	for(int i=0;i<size;i++)
	{
		cin>>input[i];
	}
    sort(input, input+size, greater<int>());
		for(int i=0;i<size;i++)
	{
		cout<<input[i]<<endl;
	}
	
	
	
}
