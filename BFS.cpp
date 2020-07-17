#include<iostream>
#include<queue>
using namespace std;
void printbfs(int**edges,int n,int sv,bool*visited)
{
	queue<int>pendingvertices;
	pendingvertices.push(sv);
	visited[sv]=true;
	while(!pendingvertices.empty())
	{
		int current=pendingvertices.front();
		pendingvertices.pop();
		cout<<" "<<current;
		for(int i=0;i<n;i++)
		{
			if(i==current)
			{
				continue;
			}
			if(edges[current][i]==1&&!visited[i])
			{
				pendingvertices.push(i);
				visited[i]=true;
			}
			
			}
		}
	
	
	}
	
int main()
{
	int n,e;
	cin>>n>>e;
	int**edges=new int*[n];
	for(int i=0;i<n;i++)
	{
	  edges[i]=new int[n];
		for(int j=0;j<n;j++){
			edges[i][j]=0;
			}
	}
	for(int i=0;i<e;i++)
	{
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
		
	}
printbfs(edges,n,0);

	for(int i=0;i<n;i++)
	{
		delete[]edges[i];
	}
	delete[]edges;
	
	return 0;
}
