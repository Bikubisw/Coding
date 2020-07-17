#include<iostream>
using namespace std;
bool issorted(int arr[],int n);
int main()
{
	int t,arr[10],n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
	
	if(arr[0]==0||(arr[1]==0&&arr[0]==1))
	{
		for (int i=0;i<n;i++)
		{
			if(arr[i]-arr[i+1]==1){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		if(issorted(arr,n))
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	
		}
		else{
			cout<<"no"<<endl;
		}
	
		
}
bool issorted(int arr[],int n)
{
	for(int i=0;i<n;i++){
	
	if(arr[i]>arr[i+1])
	{
		return false;
		
	}
	return true;
}
}
