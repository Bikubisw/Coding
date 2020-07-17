#include<bits/stdc++.h>
using namespace std;
#define MAX 100002
class trienode
{
	public:
		int cnt;
		trienode*children[2];
		trienode()
		{
			cnt=0;
			children[0]=NULL;
			children[1]=NULL;
		}
		};
		int arr[MAX];
void inserttrie(int n,trienode*root)
{
	trienode*curr=root;
	trienode*temp;
	for(int i=31;i>=0;i--){
	bool k=(n>>i)&1;
	if(curr->children[k]==NULL)
	{temp=new trienode();
		temp->cnt=1;
	    root->children[k]=temp;	
		}	
	else
	{(curr->children[k]->cnt)++;
	curr=curr->children[k];
		}	
	}
	}
	long long searchtrie(int value,int n,int k,trienode*root)
	{long long ans=0;
	trienode*curr=root;
	for(int i=31;i>=0;i--)
		{
			bool p=(value>>i)&1;
			bool q=(k>>i)&1;
			if(q==1)
			{
			if(curr->children[p]!=NULL)
			{
				ans+=curr->children[p]->cnt;
			}
			curr=curr->children[1-p];
			}
			else
			{curr=curr->children[p];		
						}
						if(curr==NULL){
							break;
						}
						}
		return ans;
	}
int main()
{
	int t,n,k,mxor;
	long long ans;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		trienode*root=new trienode();
		
		ans=0;
		mxor=0;
		inserttrie(mxor,root);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			mxor^=arr[i];
			inserttrie(mxor,root);
			ans+=searchtrie(mxor,n,k,root);
			
		}
		cout<<ans<<endl;
	}
	return 0;
}
