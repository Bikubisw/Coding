#include<iostream>
using namespace std;
int check_rotation(int *arr,int n){
	int min=arr[0];
	int minindex=0;
	for(int i=1;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
			minindex=i;
		}
	}
	return arr[minindex];
}
int main(){
	int n;
	cin>>n;
	int*arr=new int [n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=check_rotation(arr,n);
	cout<<ans<<endl;
	return 0;
}
