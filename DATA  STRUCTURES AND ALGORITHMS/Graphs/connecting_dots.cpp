#include<bits/stdc++.h>
using namespace std;
#define MAXN 51
void initialize(bool** visited,int N,int M){
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			visited[i][j]=false;
		}
	}
}
bool dfs(char board[][MAXN],char a,int N, int M,int i,int j,bool** visited){
	visited[i][j]=true;
	if(board[i][j]!=a){
		return true;
	}
	bool ans=true;
	if(j+1<M &&board[i][j+1]==a&&!visited[i][j+1]){
		ans=ans||dfs(board,a,N,M,i,j+1,visited);
	}
	if(i+1<N &&board[i+1][j]==a &&!visited[i+1][j]){
		ans=ans||dfs(board,a,N,M,i+1,j,visited);
	}
	if(j-1>=0 &&board[i][j-1]==a &&!visited[i][j-1]){
		ans=ans||dfs(board,a,N,M,i,j-1,visited);
	}
	if(i-1>=0 &&board[i-1][j]==a &&!visited[i-1][j]){
		ans=ans||dfs(board,a,N,M,i-1,j,visited);
	}
	return ans;
}
int solve(char board[][MAXN],int n, int m)
{
    bool** visited=new bool*[n];
    for(int i=0;i<n;i++){
    	visited[i]=new bool[n];
	}
	initialize(visited,n,m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			bool ans=false;
			char character=board[i][j];
			if(!visited[i][j]){
				ans=dfs(board,character,n,m,i,j,visited);
			}
			if(ans){
				return 1;
			}
			initialize(visited,n,m);
			
		}
	}
	return 0;
}
int main()
{
	int N,M,i;
	char board[MAXN][MAXN];
	cin>>N>>M;
	for(i = 0;i < N; i++){
		for(int j=0;j<M;j++){
		cin>>board[i][j];
	}
	}
	cout<<solve(board,N,M)<<endl;
}
