#include<iostream>
using namespace std;
int missing_term(int*arr,int n){
	int d=(arr[n-1]-arr[0])/n;
	int sum_ap=(n+1)*((2*arr[0])+(n*d))/2;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum_ap-sum;
	
	}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<missing_term(arr,n)<<endl;
	delete []arr;
	
}
