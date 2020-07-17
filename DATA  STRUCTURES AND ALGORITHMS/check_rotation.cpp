#include<bits/stdc++.h>
using namespace std;
int check_rotation(int *arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i+1]>arr[i]){
			count++;
			}
	}
	return n-count;
	
}


int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
cout<<check_rotation(arr,n)<<endl;
delete arr;
		return 0;
}
