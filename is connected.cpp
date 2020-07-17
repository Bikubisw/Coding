#include<iostream>
using namespace std;
void printedges(int**edges,int n,int sv,bool*visited)
{visited[sv]=true;
	for(int i=0;i<n;i++)
	{
	 if(i==sv)
		{
			continue;
		}
		if(edges[sv][i]==1)
		{
			if(visited[i])
			{
				continue;
			}
			printedges(edges,n,i,visited);
		}
	}
}
bool isconnected(int**edges,int n,int sv)
{
	bool *visited=new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	 printedges(edges,n,sv,visited);
	 for(int i=0;i<n;i++)
	{if(visited[i])
	{
		return true;
	}
}
return false;
delete[]visited;
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
	if(isconnected(edges,n,0))
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}

	for(int i=0;i<n;i++)
	{
		delete[]edges[i];
	}
	delete[]edges;
	return 0;
}
