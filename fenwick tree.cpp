#include<bits/stdc++.h>
using namespace std;

void update(int index,int value,int*bit,int n){
for(;index<=n;index+=index&(-index))
{
	bit[index]=bit[index]+value;
	}	
	
	}
int query(int index,int *bit)
{
	int sum=0;
	for(;index>0;index-=index&(-index))
	{
		sum+=bit[index];
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	int *arr=new int[n+1]();
	int *bit=new int[n+1]();
	for(int i=1;i<=n;i++)
	{cin>>arr[i];
	update(i,arr[i],bit,n);
	}
	cout<<"sum of first 5 elements"<<query(5,bit)<<endl;
	cout<<"sum of the elements from 2 to 6 index"<<query(6,bit)-query(1,bit)<<endl;
	
	return 0;
}
