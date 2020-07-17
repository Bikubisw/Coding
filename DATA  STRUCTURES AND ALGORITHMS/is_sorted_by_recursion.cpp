#include<iostream>
using namespace std;
bool is_sorted(int *arr,int n){
	if(n==0||n==1){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
		}
		bool issorted=is_sorted(arr+1,n-1);
		return issorted;
		}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(is_sorted(arr,n)){
		cout<<"The array is sorted"<<endl;
			}
	else{
		cout<<"The array is not sorted"<<endl;
	}
	return 0;
}
