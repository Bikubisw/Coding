#include<iostream>
#include<vector>
using namespace std;
#define NMAX 55
char cake[NMAX][NMAX];
void initialize(bool** visited,int N){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			visited[i][j]=false;
		}
	}
}
int dfs(char cake[][NMAX],int N,int i,int j,bool**visited){
	visited[i][j]=true;
	if(cake[i][j]=='0'){
		return 0;
	}
	int count=0;
	if(j+1<N &&cake[i][j+1]=='1'&&!visited[i][j+1]){
		count+=dfs(cake,N,i,j+1,visited);
	}
	if(i+1<N &&cake[i+1][j]=='1'&&!visited[i+1][j]){
		count+=dfs(cake,N,i+1,j,visited);
	}
	if(j-1>=0 &&cake[i][j-1]=='1'&&!visited[i][j-1]){
		count+=dfs(cake,N,i,j-1,visited);
	}
	if(i-1>=0 &&cake[i-1][j]=='1'&&!visited[i-1][j]){
		count+=dfs(cake,N,i-1,j,visited);
	}
	return count+1;
	
}
int solve(int N,char cake[NMAX][NMAX])
{
	bool **visited=new bool*[N];
	for(int i=0;i<N;i++){
		visited[i]=new bool[N];
	}
	initialize(visited,N);
	int max=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			int ans=0;
			if(!visited[i][j]&& cake[i][j]=='1'){
				ans=dfs(cake,N,i,j,visited);
			}
			if(ans>max){
				max=ans;
			}
	initialize(visited,N);			
		}
	}
	return max;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cin>>cake[i][j];
		}
	}
	cout<<solve(n,cake)<<endl;
}
