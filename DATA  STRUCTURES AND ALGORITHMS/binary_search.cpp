#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int val){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==val){
			return mid;
		}
		else if(arr[mid]<val){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int ans=BinarySearch(arr,n,key);
	cout<<ans<<endl;
	return 0;
}
