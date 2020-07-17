#include<bits/stdc++.h>
using namespace std;
vector<int>*getpath(int **edges,int n,int sv,int ev)
{
	queue<int>bfsq;
	bool *visited=new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	bfsq.push(sv);
	visited[sv]=true;
	while(!bfsq.empty())
	{
		int front=bfsq.front();
		bfsq.pop();
		
	}
}
int main()
{
	int n,e;
	cin>>n>>e;
	int**edges=new int*[n];
	for(int i=0;i<n;i++)
	{edges[i]=new int[n];
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
		int sv,ev;
		cin>>sv>>ev;
		vector<int>*output=getpath(edges,n,sv,ev);
		if(output!=NULL)
		{for(int i=0;i<output->size();i++)
			{
				cout<<output->at(i)<<" ";
			}
		}
		else
		{
			cout<<"NO path found"<<endl;
		}
		delete[]output;

		for(int i=0;i<n;i++)
	{
		delete[]edges[i];
	}
	delete[]edges;
	return 0;
}
