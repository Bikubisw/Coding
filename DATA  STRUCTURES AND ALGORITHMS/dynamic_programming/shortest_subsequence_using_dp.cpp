#include<bits/stdc++.h>
#define IEF 1e9
using namespace std;
int solve(string S,string V)
{
	int m=S.length();
	int n=V.length();
	int dp[m+1][n+1],next[m+1][n+1];
	for(int i=0;i<m;i++){
		int prev=-1;
		for(int j=0;j<n;j++){
			if(S[i]==V[j]){
				prev=j;
			}
			next[i+1][j+1]=prev;
		}
	}
	for(int i=1;i<=n;i++){
		dp[i][0]=1;
	}
	for(int i=0;i<=m;i++){
		dp[0][i]=IEF;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
	if(next[i][j]==-1){
		dp[i][j]=1;
	}
	else{
		dp[i][j]=min(dp[i-1][j],1+dp[i-1][next[i][j]]);
	}
	
		}
	}
	return dp[m][n];
}
int main()
{
	string S,V;
	cin>>S>>V;
	cout<<solve(S,V)<<endl;
	return 0;
}
