#include<bits/stdc++.h>
using namespace std;
void buildtree(int*arr,int*tree,int start,int end,int treenode)
{
	if(start==end)
	{
		tree[treenode]=arr[start];
		return;
	}
	int mid=(start+end)/2;
	buildtree(arr,tree,start,mid,2*treenode);
	buildtree(arr,tree,mid+1,end,2*treenode+1);
	tree[treenode]=min(tree[2*treenode],tree[2*treenode+1]);
	}
	void updatelazytree(int*tree,int*lazy,int low,int high,int startr,int endr,int currpos,int inc)
	{
		if(low>high)
		{
			return;
		}
		if(lazy[currpos]!=0)
		{
			tree[currpos]+=lazy[currpos];
			if(low!=high)
			{
				lazy[2*currpos]+=lazy[currpos];
				lazy[2*currpos+1]+=lazy[currpos];
			}
			lazy[currpos]=0;
		}
		if(startr>high||endr<low)
		{
			return;
		}
		if(startr>=low&&endr<=high)
		{
			
		}
	}
	int main()
	{
		int n;
		cin>>n;
		int *arr=new int[n]
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int *tree=new int[3*n]();
		buildtree(arr,tree,0,n-1,1);
		int*lazy=new int[3*n]();
		
		return 0;
		
	}
