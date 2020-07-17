#include<iostream>
using namespace std;
int length(char s[])
{
	if(s[0]=='\0')
	{
		return 0;
	}
	int smallstringlen=length(s+1);
	return smallstringlen+1;
}
int main()
{
	char str[100];
	cin>>str;
	int l=length(str);
	cout<<"length of the string"<<" "<<l<<endl;
	return 0;
}
