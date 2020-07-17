#include<bits/stdc++.h>
using namespace std;

class Edgenum{
	public:
		int sc;
		int des;
		int wei;
};
bool compare(Edgenum e1,Edgenum e2)
{
	return e1.wei<e2.wei;
}
int getparent(int v,int*parent)
{
	if(parent[v]==v)
	{
		return v;
	}
	return getparent(parent[v],parent);
	
}
Edgenum*krushkals(Edgenum*edges,int n,int e)
{
	sort(edges,edges+e,compare);
	Edgenum*output=new Edgenum[n-1];
	int *parent=new int[n];
	for(int i=0;i<n;i++)
	{
		parent[i]=i;
	}
	int count=0;
	int i=0;
	while(count<n-1)
	{Edgenum currentedge=edges[i];
	int scparent=getparent(currentedge.sc,parent);
	int desparent=getparent(currentedge.des,parent);
	if(scparent!=desparent)
	{
		output[count]=currentedge;
		count++;
		parent[scparent]=desparent;
	}
	i++;
	}
	return output;
	delete[]output;
	delete[]parent;
	
}
int main()
{int n,e;
cin>>n>>e;
Edgenum*edges=new Edgenum[e];
for(int i=0;i<n;i++)
{
	int s,d,w;
	cin>>s>>d>>w;
	edges[i].sc=s;
	edges[i].des=d;
	edges[i].wei=w;
}
Edgenum*output=krushkals(edges,n,e);
for(int i=0;i<n-1;i++)
{
	if(output[i].sc<output[i].des)
	{
		cout<<output[i].sc<<" "<<output[i].des<<" "<<output[i].wei<<endl;
	}
	else
	{
	cout<<output[i].des<<" "<<output[i].sc<<" "<<output[i].wei<<endl;	
	}
}
delete[]output;
return 0;
}
