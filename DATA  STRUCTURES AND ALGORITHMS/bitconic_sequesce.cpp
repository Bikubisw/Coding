#include<iostream>
using namespace std;
int bitonic_sequence(int *arr,int n){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid-1]){
			return arr[mid];
		}
		if(arr[mid]<arr[mid+1]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
		
	}
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<bitonic_sequence(arr,n)<<endl;
	 
}
