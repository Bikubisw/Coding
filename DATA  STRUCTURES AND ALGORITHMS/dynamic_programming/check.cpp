#include <bits/stdc++.h>
using namespace std;
unordered_map<string,int> ourmap;
int allwayshelper(vector<int>arr,int x,int n,int index,int** dp){
	if(x==0){
		return 1;
	}
	if(index>=arr.size()){
		return 0;
	}
	if(dp[x][index]!=-1){
		return dp[index][x];
	}
	int ans=allwayshelper(arr,x,n,index+1,dp)+allwayshelper(arr,x-pow(arr[index],n),n,index+1,dp);
	dp[x][index]=ans;
	return ans;
}
int allways(int x,int n){
	vector<int> output;
	for(int i=1;i<=sqrt(x);i++){
		output.push_back(i);
	}
	int p=output.size();
	int**dp=new int*[p+1];
	for(int i=0;i<p+1;i++){
		dp[i]=new int[x+1];
		for(int j=0;j<x+1;j++){
			dp[i][j]=-1;
		}
	}
	
	return allwayshelper(output,x,n,0,dp);
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << allways(x, n);
    return 0;
}

