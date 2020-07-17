#include<iostream>

using namespace std;

int  findMaxSquareWithAllZeros(int** arr, int row, int col){
  int**dp=new int*[row];
  for(int i=0;i<row;i++){
  	dp[i]=new int[col];
  }
  for(int i=0;i<col;i++){
  	if(arr[0][i]==0){
  		dp[0][i]=1;
	  }
	  else{
	  	dp[0][i]=0;
	  }
  }
  for(int i=0;i<row;i++){
  	if(arr[i][0]==0){
  		dp[i][0]=1;
	  }
	  else{
	  	dp[i][0]=0;
		}
  }
  for(int i=1;i<row;i++){
  	for(int j=1;j<col;j++){
  		if(arr[i][j]==1){
  			dp[i][j]=0;
		  }
		  else{
		  	dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
		  }
	  }
  }
	int max=INT_MIN;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(dp[i][j]>max){
				max=dp[i][j];
			}
		}
	}
	return max; 
}
int main()
 {
  int **arr,n,m,i,j;
  cin>>n>>m;
  arr=new int*[n];
  for(i=0;i<n;i++)
      {
       arr[i]=new int[m];
      }
  for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
	    {
	     cin>>arr[i][j];
	    }
     }
  cout << findMaxSquareWithAllZeros(arr,n,m)<< endl;
  delete arr;
  return 0;
}
