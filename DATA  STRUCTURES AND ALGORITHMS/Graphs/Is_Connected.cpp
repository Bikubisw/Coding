#include<iostream>
using namespace std;
void printDFS(int**edges,int n,int sv,bool*visited){
	visited[sv]=true;
	for(int i=0;i<n;i++){
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
bool ConnectedBFS(int **edges,int n){
	bool *visited=new bool[n];
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	printDFS(edges,n,0,visited);
	for(int i=0;i<n;i++){
		if(visited[i]==false){
			return false;
		}
	}
	return true;
}
int main(){
	int n,e;
	cin>>n>>e;
	int **edges=new int*[n];
	for(int i=0;i<n;i++){
		edges[i]=new int[n];
		for(int j=0;j<n;j++){
			edges[i][j]=0;
		}
	}
	for(int i=0;i<e;i++){
	int f,s;
	cin>>f>>s;
	edges[f][s]=1;
	edges[s][f]=1;
	}
	if(ConnectedBFS(edges,n)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	for(int i=0;i<n;i++){
		delete [] edges[i];
	}
	delete []edges;
	return 0;
}
