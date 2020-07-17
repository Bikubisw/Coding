#include<iostream>
using namespace std;
int main()
{
	int arr[10],temp;
int t,n;
cin>>t;
while(t--)
{
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
	for(int i=0;i<n;i++){
	
	if(arr[i+1]==arr[i]+1)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	
}
	for(int i=0;i<n;i++){
		if(arr[i]<=arr[i+1])
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}

	
}
	
	
	
	
	
	
	
	return 0;
}

