#include<iostream>
using namespace std;
int kadnane(int*arr,int n)
{
	int currmax=0;
	int bestsofar=INT_MIN;
	for(int i=0;i<n;i++)
	{
		currmax+=arr[i];
		if(bestsofar<currmax)
		{
			bestsofar=currmax;
		}
		if(currmax<0){
			currmax=0;
		}
	}
	return bestsofar;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<kadnane(arr,n)<<endl;
	return 0;
}
