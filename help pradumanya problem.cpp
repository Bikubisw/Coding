#include<bits/stdc++.h>
using namespace std;
class trienode{
	public:
		trienode**children;
		trienode()
		{
			children=new int*[26];
			for(int i=0;i<26;i++)
			{
				children[i]=NULL;
			}
		
		}
};
void insertnode(string s,int weight,trienode*root)
{
	if(s.empty())
	{
		return;
	}
	trienode*child;
	int index=s[0]-'a';
	if(root->children[index])
	{
		child=root->children[index];
	}
	else
	{
		child=new trienode();
		root->children[index]=child;
	}
	if(root->weight<weight)
	{
		root->weight=weight;
	}
	insert(s.substr(1),weight,child);
}

int main()
{
	
	return 0;
	
}
