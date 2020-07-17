#include<iostream>
using namespace std;
int coinchange(int *arr,int n,int value){
	int dp[value+1][n];
	for(int i=0;i<n;i++){
		dp[0][i]=1;
	}
	for(int i=1;i<value+1;i++){
		for(int j=0;j<n;j++){
			// including arr[j]
			int x=(i-arr[j]>=0)?dp[i-arr[j]][j]:0;
			// excluding arr[j]
			int y=(j>=1)?dp[i][j-1]:0;
			dp[i][j]=x+y;		
		}
	}
	return dp[value][n-1];
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int value;
	cin>>value;
	cout<<coinchange(arr,n,value)<<endl;;
	return 0;
}
