#include<iostream>
#include<climits>
using namespace std;
int minCostPathhelper(int **arr,int m,int n,int i,int j){
	// base case
		if(i==m-1 && j==n-1){
			return arr[i][j];
         		}                                                                            
		if(i>=m || j>=n){
			return INT_MAX;                                             
		}
	// recursive call
	int a=minCostPathhelper(arr,m,n,i+1,j);
	int b=minCostPathhelper(arr,m,n,i,j+1);
	int c=minCostPathhelper(arr,m,n,i+1,j+1);
	return min(a,min(b,c))+arr[i][j];
}
int minCostPath(int **arr,int m,int n){
	
	return minCostPathhelper(arr,m,n,0,0);	
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
