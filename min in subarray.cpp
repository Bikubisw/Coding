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
int query(int *tree,int start,int end,int treenode,int left,int right)
{
	if(start>right||end<left)
		{
			return INT_MAX;
		}
		if(start>=left&&end<=right)
		{
			return tree[treenode];
		}
			int mid=(start+end)/2;
		int ans1=query(tree,start,mid,2*treenode,left,right);
		int ans2=query(tree,mid+1,end,2*treenode+1,left,right);
		return min(ans1,ans2);
}
void updatetree(int*arr,int*tree,int start,int end,int treenode,int index,int value)
	{
		if(start==end)
		{
			arr[index]=value;
			tree[treenode]=value;
			return;
		}
		int mid=(start+end)/2;
		if(index>mid)
		{
			updatetree(arr,tree,mid+1,end,2*treenode+1,index,value);
		}
		else
		{
			updatetree(arr,tree,start,mid,2*treenode,index,value);
		}
		tree[treenode]=min(tree[2*treenode],tree[2*treenode+1]);
	}
int main()
{
	int n,q,a,b;
	char ch;
	cin>>n>>q;
	int *arr=new int[n];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int *tree=new int[4*n];
	buildtree(arr,tree,0,n-1,1);
	while(q--)
	{
		cin>>ch;
		cin>>a>>b;
		if(ch=='q')
		{
			cout<<query(tree,0,n-1,1,a-1,b-1)<<endl;
		}
		else
		{
			updatetree(arr,tree,0,n-1,1,a-1,b);
		}
		
		
	}
	
	return 0;
}
