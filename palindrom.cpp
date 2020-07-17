#include<bits/stdc++.h>
using namespace std;
char getchar(int i)
{
	return (char) (i+97);
	
}
void printpalindromicstring(string s)
{
	map<char,vector<int> > indexesmap;
	for(int i=0;i<s.length();i++)
	{
		indexesmap[s[i]].push_back(i);
		
	}
	int oddfreq_count=0;
	
	for(int i=0;i<26;i++)
	{
	
		if((indexesmap[getchar(i)].size()%2)!=0)
		{
			oddfreq_count++;
		}
	}
	if(oddfreq_count>=2)
	{
		cout<<"-1";
		return;
	}
	int ans[s.length()];
	int start=0;
	int end=s.length()-1;
			for(int i=0;i<26;i++)
	{
		char currentchar=getchar(i);
		for(int j=0;j<indexesmap[currentchar].size();j+=2)
		{
			if((indexesmap[currentchar].size()-j)==1)
			{
				ans[s.length()/2]=indexesmap[currentchar][j];
				continue;
			}
			ans[start]=indexesmap[currentchar][j];
			ans[end]=indexesmap[currentchar][j+1];
			start++;
			end--;
			
		}
	}
		for(int i=0;i<s.length();i++)
		{
			cout<<ans[i]+1<<" ";
		}
		return;
	

	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		printpalindromicstring(s);
		cout<<endl;
		
	}
	return 0;
}
