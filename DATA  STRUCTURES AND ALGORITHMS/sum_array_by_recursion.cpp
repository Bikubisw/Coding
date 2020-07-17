#include<iostream>
using namespace std;
int sum(int *arr,int n){
	if(n==0){
		return 0;
	}
	int smallans=sum(arr+1,n-1);
	return arr[0]+smallans;
}
int main()
{
	int n;
	cin>>n;
	int *arr=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=sum(arr,n);
	cout<<ans<<endl;
}
