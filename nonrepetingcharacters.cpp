#include<iostream>
#include<unordered_map>
using namespace std;
char* nonrepeatingcharacter(char* str)
{
	int len=strlen(str);
	if(len==0)
	{
		char*ans=new char[1];
		ans[0]='\0';
		return ans;
		
	}
	char*ans=new char[len+1];
	unordered_map<char,bool> hm;
	int i=0;
	for(int j=0;j<len;j++)
	{
		char curretntchar=str[j];
		if(hm.count(currentchar)==0)
		{
			hm[currentchar]=true;
			ans[i++]=currentchar;
				}		
	}
	ans[i]='\0';
	return ans;
	
	}
int main()
{
	int n;
	cin>>n;
	cout<<"enter the number of characters"<<endl;
	char *s=new char[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		
	}
char*p=	nonrepeatingcharacter(s);
for(int i=0;i<p.length();p++)
{
	cout<<p[i]<<" ";
}
delete [] p;

	
	
	
	
}
