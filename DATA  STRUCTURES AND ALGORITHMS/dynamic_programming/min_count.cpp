#include<iostream>
using namespace std;
#include<math.h>
int mincount(int n){
	if(n<=3){
		return n;
	}
	int* dp=new int[n+1];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	for(int i=4;i<=n;i++){
		dp[i]=i;
		for(int x=1;x<=sqrt(i);x++){
			int temp=x*x;
			if(temp>i){
				break;
			}
			else{
				dp[i]=min(dp[i],dp[i-temp]+1);
			}
			
		}
	}
	int ans=dp[n];
	delete [] dp;
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<mincount(n)<<endl;
	return 0;
}
