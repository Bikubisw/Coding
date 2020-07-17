#include<bits/stdc++.h>
using namespace std;
void merge(int*a,int start,int end){
	int size=end-start+1;
	int mid=(start+end)/2;
	int*output=new int[size];
	int i=start;
	int j=mid+1;
	int k=0;
	while(i<=mid&&j<=end){
		if(a[i]<a[j]){
		output[k]=a[i];
		i++;
		k++;	
		}else{
			output[k]=a[j];
			j++;
			k++;
			
		}
	}
		while(i<=mid){
			output[k]=a[i];
			k++;
			i++;
		}
			while(j<=end){
			output[k]=a[j];
			k++;
			j++;
		}
		int m=0;
		for(int i=start;i<=end;i++){
			a[i]=output[m];
			m++;
		}
		delete[]output;
		
		}
	void mergesort(int *arr,int start,int end){
	if(start>=end){
		return;
	}
	int mid=(start+end)/2;
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	merge(arr,start,end);
		}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
		return 0;
}
