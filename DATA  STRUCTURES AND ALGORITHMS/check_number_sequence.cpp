#include<iostream>
using namespace std;
void arrangearray(int*arr,int n){
	int i=0;
	int j=n-1;
	int num=1;
	 while(i<j){
	 	arr[i]=num;
	 	num++;
	 	arr[j]=num;
	 	num++;
	 	i++;
	 	j--;
	 	
	 }
	 if(i==j){
	 	arr[i]=num;
	 }
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	arrangearray(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	delete arr;
	return 0;
}
