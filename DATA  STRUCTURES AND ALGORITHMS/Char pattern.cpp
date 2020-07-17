#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		char sc='A'+n-i;
		while(j<=i)
		{
			char c=sc+j-1;
			cout<<c;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
/*	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{ 		int j=1;
	char sc='A'+i-1;
		while(j<=i){
			char ch=sc+j-1;
			cout<<ch;
			j++;
		}
		cout<<endl;
		i++;
		
	}*/
	
}
