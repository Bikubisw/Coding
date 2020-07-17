#include<iostream>
#include<vector>
using namespace std;
void printDFS(int **edges,int n,int sv,bool *visited){
	visited[sv]=true;
	for(int i=1;i<=n;i++){
		if(i==sv){
			continue;
		}
		if(edges[sv][i]==1){
			if(visited[i]==true){
				continue;
			}
			printDFS(edges,n,i,visited);
		}
	}
}
int solvehelper(int **edges,int n){
	bool *visited=new bool[n+1];
	for(int i=1;i<=n;i++){
		visited[i]=false;
	}
	int count=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			printDFS(edges,n,i,visited);
			count++;
		}
	}
	return count;
}
int solve(int n,int e,vector<int> u,vector<int> v){
	int **edges=new int*[n+1];
	for(int i=1;i<=n;i++){
		edges[i]=new int [n+1];
		for(int j=1;j<=n;j++){
			edges[i][j]=0;
		}
	}
	for(int i=0;i<e;i++){
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
