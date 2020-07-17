#include<iostream>
#include<climits>
using namespace std;
int minCostPath(int **input,int m,int n){
	int **output=new int*[m];
	for(int i=0;i<m;i++){
		output[i]=new int[m];
	}
	// fill the last cell first
	output[m-1][n-1]=input[m-1][n-1];
	// Now fill the last row (right to left)
	for(int j=n-2;j>=0;j--){
		output[m-1][j]=input[m-1][j]+output[m-1][j+1];
		
	}
	// Now fill the last column
	for(int k=m-2;k>=0;k--){
		output[k][n-1]=input[k][n-1]+output[k+1][n-1];
	}
	// fill remaining cells
	for(int i=m-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			output[i][j]=min(output[i+1][j],min(output[i+1][j+1],output[i][j+1]))+input[i][j];
		}
	}
	return output[0][0];
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
