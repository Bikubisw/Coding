#include<iostream>
using namespace std;
int maxproductsubarray(int*arr,int n){
	int maxending=1;
	int minending=1;
	int max_so_far=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			maxending=maxending*arr[i];
			minending=min(1,maxending*arr[i]);
		}
		else if(arr[i]==0){
			maxending=1;
	      minending=1;
		}
		else {
			int temp=maxending;
			maxending=max(1,minending*arr[i]);
			minending=temp*arr[i];
		}
		max_so_far=max(max_so_far,maxending);
			}
			return max_so_far;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxproductsubarray(arr,n)<<endl;
	return 0;
	
}
