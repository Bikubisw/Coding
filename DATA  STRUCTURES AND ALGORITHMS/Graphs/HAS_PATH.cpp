#include<iostream>
#include<queue>
using namespace std;
bool hasPath(int**edges,int n,int sv,int ev){
	if(edges[sv][ev]==1){
		return true;
	}
	bool *visited=new bool[n];
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	queue<int> pendingVertices;
	pendingVertices.push(sv);
	visited[sv]=true;
	while(!pendingVertices.empty()){
	int front=pendingVertices.front();
	pendingVertices.pop();
	for(int i=0;i<n;i++){
		if(i==front){
			continue;
		}
		if(edges[front][i]==1 && !visited[i]){
			if(i==ev){
				return true;
			}
			else{
			pendingVertices.push(i);
			visited[i]=true;
		}
		}
	}
	}
	return false;
}
int main(){
	int n;
	int e;
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
	int sv;
	int ev;
	cin>>sv>>ev;
	if(hasPath(edges,n,sv,ev)){
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
