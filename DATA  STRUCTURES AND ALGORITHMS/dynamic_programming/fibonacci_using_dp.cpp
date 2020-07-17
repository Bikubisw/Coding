#include<iostream>
using namespace std;
int fibonacci_numberhelper(int n,int*arr){
	if(n<=1){
		return n;
	}
	//check if ans is already exists
	if(arr[n]!=-1){
		return arr[n];
	}
	int a=fibonacci_numberhelper(n-1,arr);
	int b=fibonacci_numberhelper(n-2,arr);
	arr[n]=a+b;
	return arr[n];
}
int fibonacci_number(int n){
	int *arr=new int[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
	return fibonacci_numberhelper(n,arr);
}
int main(){
	int n;
	cin>>n;
	cout<<fibonacci_number(n)<<endl;
	return 0;
}
