#include<iostream>
using namespace std;
void SortZeroesAndOne(int arr[], int n){
int forward=0;
int backward=n-1;
for(int i=0;i<n;i++){
	if(arr[forward]==1&&arr[backward]==0){
		int temp=arr[forward];
		arr[forward]=arr[backward];
		arr[backward]=temp;
	}
	forward+=1;
	backward-=1;
}	
}	
	

int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	SortZeroesAndOne(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
