#include<iostream>
using namespace std;
void leaders_in_array(int*arr,int n){
	int j=0;
	int largest=INT_MIN;
	int *save=new int[n];
	for(int i=n-1;i>=0;i--){
		if(arr[i]>=largest){
			save[j]=arr[i];
			j++;
			largest=arr[i];
		}
	}
	for(int i=j-1;i>=0;i--){
		cout<<save[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	leaders_in_array(arr,n);
	delete[]arr;
	return 0;
}
