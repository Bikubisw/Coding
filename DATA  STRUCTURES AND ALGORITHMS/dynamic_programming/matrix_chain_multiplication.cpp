#include<iostream>
using namespace std;
int matrixchain(int *arr,int si,int ei){
	if(si>ei){
		return 0;
	}	
	int count;
	int minimum=INT_MAX;
	int k;
	for(k=si+1;k<ei;k++){
		count=matrixchain(arr,si,k)+matrixchain(arr,k,ei)+(arr[si]*arr[k]*arr[ei]);
	if(count<minimum){
		minimum=count;
	}
}
	return minimum;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n+1];
	for(int i=0;i<n+1;i++){
		cin>>arr[i];
	}
	cout<<matrixchain(arr,0,n)<<endl;
	delete []arr;
}
