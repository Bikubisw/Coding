#include<iostream>
using namespace std;
int coinchangehelper(int*arr,int n,int value,int**dp){
	if(value==0){
		return 1;
	}
	if(value<0){
		return 0;
	}
	if(n<=0&&value>=1){
		return 0;
	}
	if(dp[n][value]!=-1){
		return dp[n][value];
	}
	int count1=coinchangehelper(arr+1,n-1,value,dp);
	int count2=coinchangehelper(arr,n,value-arr[0],dp);
	 int count=count1+count2;
	 dp[n][value]=count;
	 return count;
}
void coinchange(int *arr,int n,int value){
	int**dp=new int*[n+1];
	for(int i=0;i<=n;i++){
		dp[i]=new int[value+1];
		for(int j=0;j<=value;j++){
			dp[i][j]=-1;
		}
	}
	 coinchangehelper(arr,n,value,dp);
	 	for(int i=0;i<=n;i++){
		for(int j=0;j<=value;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
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
	coinchange(arr,n,value);
	return 0;
}
