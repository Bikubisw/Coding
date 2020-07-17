#include<iostream>
using namespace std;
void push_zeros(int *arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr[count]=arr[i];
			count++;
		}
		
	}
	while(count<n){
		arr[count++]=0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	/*int *temp=new int[n];
	int k=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			temp[k]=arr[i];
			k++;
		}
	}
	for(int j=k;j<n;j++){
		temp[j]=0;
	}
	for(int l=0;l<n;l++){
		arr[l]=temp[l];
	}
	delete temp;*/
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		}
		push_zeros(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	delete arr;
	return 0;
}
