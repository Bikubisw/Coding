#include<iostream>
#include<algorithm>
using namespace std;
int max_profit(int *arr,int n){
	sort(arr,arr+n);
	int *cost=new int[n];
	for(int i=0;i<n;i++){
		cost[i]=arr[i]*(n-i);
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(cost[i]>max){
			max=cost[i];
		}
	}
	return max;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<max_profit(arr,n)<<endl;
	return 0;
}
