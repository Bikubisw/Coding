#include<iostream>
using namespace std;
int rotation(int*arr,int n){
	int low=0;int high=n-1;
	while(low<high){
		int mid=low+(high-low)/2;
		if(arr[mid]>arr[high]){
			low=mid+1;
		}
		else{
			high=mid;
		}
		
	}
	return low;
	
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=rotation(arr,n);
	cout<<ans<<endl;
	return 0;
}
