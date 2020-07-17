#include<iostream>
using namespace std;
void arrange(int arr[],int n){
	int val=1;
	int s=0;
	int e=n-1;
	if(n%2==0){
		for(int i=0;i<(n/2);i++){
		arr[s]=val;
		val++;
		arr[e]=val;
		
		val++;
		s++;
		e--;
	}
	
	}
	else{
		for(int i=0;i<n/2;i++){
		arr[s]=val;
		val++;
		arr[e]=val;
		
		val++;
		s++;
		e--;	
	}
	arr[n/2]=n;
	
		
	}
}

int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	arrange(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	delete arr;
return 0;
}
