#include<bits/stdc++.h>
using namespace std;
int solvehelper(string a,string b,int sa,int sb,int**dp)
{	if(sb==b.length()){
	return 1;
	}
	if(sa==a.length()){
		return 1001;
	}
	if(dp[sa][sb]!=-1){
		return dp[sa][sb];
	}
	int option1=solvehelper(a,b,sa+1,sb,dp);
	int index=-1;
	for(int i=sb;i<b.length();i++){
		if(b[i]==a[sa]){
			index=i;
			break;
		}
	}
	if(index==-1){
	return 1;
}
	int option2=1+solvehelper(a,b,sa+1,index+1,dp);
	int ans= min(option1,option2);
	dp[sa][sb]=ans;
	return ans;
}
int solve(string S,string V){
	int **dp=new int*[S.length()];
	for(int i=0;i<S.length();i++){
		dp[i]=new int[V.length()];
		for(int j=0;j<V.length();j++){
			dp[i][j]=-1;
		}
	}
	return solvehelper(S,V,0,0,dp);
}
int main()
{
	string S,V;
	cin>>S>>V;
	cout<<solve(S,V)<<endl;
	return 0;
}
