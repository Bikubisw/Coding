#include<iostream>
using namespace std;
bool split_array_helper(int *arr,int n,int lsum,int rsum){
	if(n==0){
		return lsum==rsum;
	}
	if(arr[0]%5==0){
		lsum=lsum+arr[0];
	}
	else if(arr[0]%3==0){
		rsum=rsum+arr[0];
	}
	else{
		return split_array_helper(arr+1,n-1,lsum+arr[0],rsum)||split_array_helper(arr+1,n-1,lsum,rsum+arr[0]);	
	}
	return split_array_helper(arr+1,n-1,lsum,rsum);
}
bool split_array(int *arr,int n){
	return split_array_helper(arr,n,0,0);
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bool ans=split_array(arr,n);
	if(ans){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	return 0;
}

