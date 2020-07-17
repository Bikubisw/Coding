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
	tree[treenode]=tree[2*treenode]+tree[2*treenode+1];
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
	int query(int *tree,int start,int end,int treenode,int left,int right)
	{
		if(start>right||end<left)
		{
			return 0;
		}
		if(start>=left&&end<=right)
		{
			return tree[treenode];
		}
			int mid=(start+end)/2;
		int ans1=query(tree,start,mid,2*treenode,left,right);
		int ans2=query(tree,mid+1,end,2*treenode+1,left,right);
		return ans1+ans2;
		
	}
	int main()
{
	int arr[]={1,2,3,4,5};
	int *tree=new int[10];
	buildtree(arr,tree,0,4,1);
	updatetree(arr,tree,0,4,1,2,10);
	for(int i=1;i<10;i++)
	{
		cout<<tree[i]<<endl;
	}
	int ans=query(tree,0,4,1,2,4);
	cout<<"query ans is"<<ans<<endl;
	return 0;
}
