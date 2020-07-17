#include<iostream>
#include<climits>
using namespace std;
int minCostPathhelper(int **arr,int m,int n,int i,int j,int **output){
	// base case
		if(i==m-1 && j==n-1){
			return arr[i][j];
         		}                                                                            
		if(i>=m || j>=n){
			return INT_MAX;                                             
	}
		if(output[i][j]!=-1){
			return output[i][j];
		}
	int a=minCostPathhelper(arr,m,n,i,j+1,output);
	int b=minCostPathhelper(arr,m,n,i+1,j,output);
	int c=minCostPathhelper(arr,m,n,i+1,j+1,output);
	int ans=min(a,min(b,c))+arr[i][j];
	output[i][j]=ans;
	return ans;
}
int minCostPath(int **arr,int m,int n){
	int **output=new int*[m];
	for(int i=0;i<m;i++){
		output[i]=new int[n];
		for(int j=0;j<n;j++){
			output[i][j]=-1;
		}
	}
	return minCostPathhelper(arr,m,n,0,0,output);	
}
int main(){
	int m,n;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[m];
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
	
	return 0;
}
