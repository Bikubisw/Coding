#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

struct interval
{
	int st;
	int et;
};
bool compare(interval i1,interval i2)
{
	return i1.st>i2.st;
}
int main()

{
	int arr[]={1,2,3,8,9,5,6};
	sort(arr,arr+7,greater<int>());
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<endl;
	}
	interval arr[]={{6,4},{3,2},{2,3},{8,5}};
	sort(arr,arr+4,compare);
	for(int i=0;i<4;i++)
	{
		cout<<arr[i].st<<":"<<arr[i].et<<endl	;}
		
	//binary search
	
		int arr[]={1,2,3,8,9,5,6};
	 	sort(arr,arr+7);
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<binary_search(arr,arr+7,38)<<endl;
	
	//lower bound
		int arr[]={1,2,3,8,9,5,6};
	 	sort(arr,arr+7);
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<lower_bound(arr,arr+7,3)-arr<<endl;
	cout<<arr+2<<endl;
	cout<<endl;
	cout<<upper_bound(arr,arr+7,3)-arr<<endl;
	
	//gcd
	cout<<__gcd(10,6)<<endl;
	//
	int x=10,y=12;
	swap(x,y);
	cout<<x<<endl<<y<<endl;
		
	
}
