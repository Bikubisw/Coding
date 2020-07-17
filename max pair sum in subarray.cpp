#include<bits/stdc++.h>
using namespace std;
struct node{
	int maximum;
	int smax;
};
int query(node *tree,int start,int end,int treeindex,int left,int right)
{
		if(start>right||end<left)
		{
			return 0;
		}
		if(start>=left&&end<=right)
		{
			return tree[treeindex].maximum+tree[treeindex].smax;
		}
			int mid=(start+end)/2;
        query(tree,start,mid,2*treeindex,left,right);
		query(tree,mid+1,end,2*treeindex+1,left,right);
		node left=tree[2*treeindex];
		node right=tree[2*treeindex+1];
		tree[treeindex].maximum=max(left.maximum,right.maximum);
		tree[treeindex].smax=min(max(left.maximum,right.smax),max(right.maximum,left.smax));
		return (tree[treeindex].maximum+tree[treeindex].smax);
		
}
void buildtree(int *arr,node*tree,int treeindex,int start,int end)
{
	if(start==end)
	{
	tree[treeindex].maximum=arr[start];
		tree[treeindex].smax=INT_MIN;
		return;
	}
		int mid=(start+end)/2;
		buildtree(arr,tree,2*treeindex,start,mid);
		buildtree(arr,tree,2*treeindex+1,mid+1,end);
		node left=tree[2*treeindex];
		node right=tree[2*treeindex+1];
		tree[treeindex].maximum=max(left.maximum,right.maximum);
		tree[treeindex].smax=min(max(left.maximum,right.smax),max(right.maximum,left.smax));
		return;
		
}
int main()
{
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	node *tree=new node[3*n];
	buildtree(arr,tree,1,0,n-1);
	int ans=query(tree,0,n-1,1,2,4);
	cout<<ans<<endl;
	
	return 0;
}
