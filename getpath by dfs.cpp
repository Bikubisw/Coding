#include<bits/stdc++.h>
using namespace std;
vector<int>*getpathhelper(int **edges,int n,int sv,int ev,bool*visited)
{if(sv==ev)
	{
		vector<int>*output=new vector<int>();
		output->push_back(ev);
		return output;
	}
	visited[sv]=true;
	for(int i=0;i<n;i++)
	{
	if(edges[sv][i]==1&&!visited[i])
	{
		vector<int>*smalloutput=getpathhelper(edges,n,i,ev,visited);
		if(smalloutput!=NULL)
		{
			smalloutput->push_back(sv);
			return smalloutput;}
		}	
	}
	return NULL;
	}
vector<int>*getpath(int **edges,int n,int sv,int ev)
{
	bool *visited=new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	vector<int>*output=getpathhelper(edges,n,sv,ev,visited);
	delete[]visited;
	return output;
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
