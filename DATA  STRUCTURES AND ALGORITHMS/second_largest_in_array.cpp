#include<iostream>
#include<climits>
using namespace std;
int second_maximum(int *arr,int n){
	if(n<=0){
		return INT_MIN;
	}
	int first,second;
	 first=second=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>first){
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second&&arr[i]!=first){
			second=arr[i];
		}
	}
	return second;	
	
}


int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
cout<<second_maximum(arr,n)<<endl;
delete arr;
		return 0;
}
