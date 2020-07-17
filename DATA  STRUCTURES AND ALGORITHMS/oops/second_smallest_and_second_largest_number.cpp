#include<iostream>
#include<climits>
using namespace std;
int second_largest(int *arr,int n){
	int first=INT_MIN;
	int second=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>first){
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second&&arr[i]!=first){
			second=arr[i];
		}
	}
	return second;
}
int second_smallest(int *arr,int n){
	int first=INT_MAX;
	int second=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<first){
			second=first;
			first=arr[i];
		}
		else if(arr[i]<second&&arr[i]!=first){
			second=arr[i];
		}
	}
	return second;	
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Second Largest element is: "<<second_largest(arr,n)<<endl;
	
	cout<<"Second smallest element is: "<<second_smallest(arr,n)<<endl;
	delete []arr;
	return 0;
}
