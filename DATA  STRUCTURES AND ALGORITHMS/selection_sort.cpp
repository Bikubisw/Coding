#include<iostream>
using namespace std;
void selection_sort(int*arr,int n){
	for(int i=0;i<n-1;i++){
		int min=arr[i],minindex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<min){
				min=arr[j];
				minindex=j;
				
			}
			
		}
		int temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;		
	}
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selection_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
}
