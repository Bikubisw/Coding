#include<iostream>
#include<cstring>
#include<map>
char nonrepeating(string str)
{
	map<char,int> fre;
	for(int i=0;i<str.length();i++)
	{
		char currchar=str[i];
		fre[currchar]++;
		
	}
		for(int i=0;i<str.length();i++)
		if(fre(str[i]==1))
		{return str[i];
		}
		return str[0];
		
	
}
int main()
{
	string str="bikrambiswas";
	string temp=nonrepeating(str);
	for(int i=0;i<temp.length();i++)
	{
		cout<<temp[i]<<" ";
	}
	
	
}

