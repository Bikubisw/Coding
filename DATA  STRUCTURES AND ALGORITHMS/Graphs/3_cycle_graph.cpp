#include<iostream>
#include<vector>
using namespace std;
int solvehelper(int** arr,int n){
	int count=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j]==1){
				for(int k=1;k<=n;k++){
					if(i==k){
						continue;
					}
					if(arr[j][k]==1){
						if(arr[i][k]==1){
							count++;
						}
						else{
							continue;
						}
					}
				}
			}
		}
	}
	return count/6;	
}
int solve(int n,int m,vector<int>u,vector<int>v)
{
	int **edges=new int*[n+1];
	for(int i=1;i<=n;i++){
		edges[i]=new int[n+1];
		for(int j=1;j<=n;j++){
			edges[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		edges[u.at(i)][v.at(i)]=1;
		edges[v.at(i)][u.at(i)]=1;
	}
	
	int count=solvehelper(edges,n);
	return count;   
}
int main()
{
	int n,m;
	vector<int>u,v;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		u.push_back(x);
	}
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<solve(n,m,u,v)<<endl;
}
