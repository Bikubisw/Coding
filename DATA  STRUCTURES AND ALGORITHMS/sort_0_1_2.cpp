#include<iostream>
using namespace std;
void sort012(int*arr,int n){
	int k1=0;
	int k2=n-1;
	int*temp=new int[n];
	for(int i=0;i<n;i++){
	if(arr[i]==0){
			temp[k1]=arr[i];
			k1++;
			
		}
		if(arr[i]==2){
			temp[k2]=arr[i];
			k2--;
			
		}
	}
	for(int l=k1;l<=k2;l++){
		temp[l]=1;
	}
	for(int i=0;i<n;i++){
		arr[i]=temp[i];
	}
	delete temp;
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		sort012(arr,n);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	
	delete arr;
	return 0;
}
