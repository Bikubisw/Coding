#include<iostream>
#include<climits>
using namespace std;
int knapsack_problem(int *weights,int *values,int n,int maxweight){
	// base case
	if(n==0||maxweight<=0){
		return 0;
	}
	if(weights[0]>maxweight){
		return knapsack_problem(weights+1,values+1,n-1,maxweight);
	}
	else{
	
	int a=knapsack_problem(weights+1,values+1,n-1,maxweight-weights[0])+values[0];
	int b=knapsack_problem(weights+1,values+1,n-1,maxweight);
	return max(a,b);
}
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
	cout<<knapsack_problem(weights,values,n,maxweight)<<endl;
	delete weights;
	delete values;
	return 0;
}
