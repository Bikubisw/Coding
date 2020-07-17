#include<bits/stdc++.h>
using namespace std;
int getvertex(bool*visited,int*dist,int n)
{
	int minvertex=-1;
		for(int i=0;i<n;i++)
		{
			if(!visited[i]&&(minvertex==-1||(dist[i]<dist[minvertex])))
			{
				minvertex=i;
			}
		}
		return minvertex;
	
}
void djkstarsalgo(int**edges,int n)
{
	bool*visited=new bool[n]();
	int*dist=new int[n];
	for(int i=0;i<n;i++)
	{
		dist[i]=INT_MAX;
	}
	dist[0]=0;
	for(int i=0;i<n-1;i++)
	{
		int minvertex=getvertex(visited,dist,n);
		visited[minvertex]=true;
		for(int j=0;j<n;j++)
		{
			if(edges[minvertex][j]&&!visited[j])
			{
				int currd=dist[minvertex]+edges[minvertex][j];
				if(dist[j]>currd)
				{
					dist[j]=currd;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<i<<dist[i]<<endl;
	}
	delete[]visited;
	delete[]dist;
}
int main()
{
	int n,e;
	cin>>n>>e;
	int**edges=new int*[n];
	for(int i=0;i<n;i++)
	{
		edges[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			edges[i][j]=0;
		}
	}

	for(int i=0;i<e;i++)
	{
	int f,s,wei;
	cin>>f>>s>>wei;
		edges[f][s]=wei;
		edges[s][f]=wei;
		
	}
	cout<<endl;
	djkstarsalgo(edges,n);
	for(int i=0;i<n;i++)
	{
		delete[]edges[i];
	}
	delete[]edges;
	return 0;
}
