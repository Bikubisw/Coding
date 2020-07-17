#include<iostream>
using namespace std;
void SortZeroesAndOne(int arr[], int n){
int *output=new int[n];
int k=0;
int j=n-1;
for(int i=0;i<n;i++){
	if(arr[i]==0){
		output[k]=0;
		k++;
	}
	else{
		output[j]=1;
		j--;
	}
}
for(int i=0;i<n;i++){
	arr[i]=output[i];
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
