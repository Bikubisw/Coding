#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
void printDFShelper(int **edges,int n,int sv,bool *visited,vector<int>& output){
	output.push_back(sv);
	visited[sv]=true;
	for(int i=0;i<n;i++){
		if(i==sv){
			continue;
	}
	if(edges[sv][i]==1){
		if(visited[i]==true){
			continue;
		}
		printDFShelper(edges,n,i,visited,output);
	}
	}
}
vector<int> printDFS(int **edges,int n,int sv,bool *visited){
	vector<int>output;
	printDFShelper(edges,n,sv,visited,output);
	return output;
}
vector<vector<int>> allconnected_components(int **edges,int n){
	bool *visited=new bool[n];
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	vector<vector<int>> output;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			vector<int> smalloutput=printDFS(edges,n,i,visited);
			output.push_back(smalloutput);
		}
	}
	return output;
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
	vector<vector<int>> output=allconnected_components(edges,n);
	for(int i=0;i<output.size();i++){
		sort(output[i].begin(),output[i].end());
	}
	for(int i=0;i<output.size();i++){
		for(int j=0;j<output[i].size();j++){
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++){
		delete [] edges[i];
	}
	delete []edges;
	return 0;
}
