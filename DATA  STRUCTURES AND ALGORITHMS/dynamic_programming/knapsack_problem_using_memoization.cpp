#include<iostream>
#include<climits>
using namespace std;
int knapsack_problem(int *weights,int *values,int n,int maxweight,int** arr){
	// base case
	if(n==0){
		return 0;
	}
	if(maxweight<=0){
		return 0;
	}
	if(arr[n][maxweight]!=-1){
		return arr[n][maxweight];
	}
	int ans;
	if(weights[0]>maxweight){
		ans= knapsack_problem(weights+1,values+1,n-1,maxweight,arr);
	}
	else{
	
	int a=knapsack_problem(weights+1,values+1,n-1,maxweight-weights[0],arr)+values[0];
	int b=knapsack_problem(weights+1,values+1,n-1,maxweight,arr);
	ans=max(a,b);
}
arr[n][maxweight]=ans;
return ans;
}


int knapsack(int* weights, int* values, int n, int maxWeight){
	int **arr =new int*[n+1];
	for(int i=0;i<n+1;i++){
		arr[i]=new int[maxWeight+1];
		for(int j=0;j<maxWeight+1;j++){
			arr[i][j]=-1;
		}
	}
	return knapsack_problem(weights,values,n,maxWeight,arr);
	
	    
}

int main(){
	int n;
	cin>>n;
	int *weights=new int[n];
	int* values=new int[n];
	for(int i=0;i<n;i++){
		cin>>weights[i];
	}
	for(int i=0;i<n;i++){
		cin>>values[i];
	}
	int maxweight;
	cin>>maxweight;
	cout<<knapsack(weights,values,n,maxweight)<<endl;
	delete weights;
	delete values;
	return 0;
}
