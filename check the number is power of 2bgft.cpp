#include<iostream>
using namespace std;

int main() 
{
int n;
cin>>n;
while((n%2)==0)
{
	n=n/2;
}
if(n==1)
{
	cout<<"the num is pow of 2"<<endl;
}
else
{
cout<<"the num is not pow of 2"<<endl;	
}




}


