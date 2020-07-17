#include<bits/stdc++.h>
using namespace std;
class trienode{
	public:
	trienode*left;
	trienode*right;
};
void insert(int n,trienode*head)
{
	trienode*curr=head;
	for(int i=31;i>=0;i--)
	{
		int b=(n>>i)&1;
		if(b==0)
		{if(!curr->left)
			{
				curr->left=new trienode();
			}
			curr=curr->left;
			}
		else
		{	if(!curr->right)
			{
				curr->right=new trienode();
			}
			curr=curr->right;
			}
	}
}
int findmaxxorpair(int*arr,int n,trienode*head)
{
	int max_xor=INT_MIN;
	int value=0;
	for(int i=0;i<n;i++)
	{
		 value^=arr[i];
		trienode*curr=head;
		long long curr_xor=0;
		for(int j=31;j>=0;j--)
		{
			int b=(value>>j)&1;
			if(b==0)
			{
				if(curr->right){
					curr_xor+=pow(2,j);
				curr=curr->right;
			}
			else
			{
				curr=curr->left;
			}
			}
			else
			{
				if(curr->left)
				{
					curr_xor+=pow(2,j);
					curr=curr->left;
				}
				else
				{
					curr=curr->right;
				}
				
			}
		
			
		}
		if(curr_xor>max_xor)
		{
			max_xor=curr_xor;
		}
		
	}
	return max_xor;
}
int main()
{	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	trienode*head=new trienode();
	for(int i=0;i<n;i++)
	{
		insert(arr[i],head);
	}
	cout<<findmaxxorpair(arr,n,head)<<endl;
	return 0;
}
