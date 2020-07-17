#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
vector<int>* getpath(int **edges,int n,int sv,int ev){
	bool* visited=new bool[n];
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	queue<int> pendingnodes;
	pendingnodes.push(sv);
	bool flag=false;
	unordered_map<int,int> parent;
	while(!pendingnodes.empty()&& !flag){
		int front=pendingnodes.front();
		pendingnodes.pop();
		for(int i=0;i<n;i++){
			if(edges[front][i]==1&&!visited[i]){
				parent[i]=front;
				pendingnodes.push(i);
				visited[i]=true;
				if(i==ev){
					flag=true;
					break;
				}
				
			}
			
		}
	}
	delete []visited;
	if(!flag){
		return NULL;
	}
	else{
		vector<int>*output=new vector<int>();
		output->push_back(ev);
		int current=ev;
		while(current!=sv){
			current=parent[current];
			output->push_back(current);
		}
		return output;
	}
	
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
	vector<int>* output=getpath(edges,n,sv,ev);
	if(output!=NULL){
		for(int i=0;i<output->size();i++){
			cout<<output->at(i)<<" ";
		}
	}
	delete output;
	for(int i=0;i<n;i++){
		delete [] edges[i];
	}
	delete []edges;
	return 0;
}
