#include<iostream>
using namespace std;
int power(int x,int n);

int main() {
	// Write your code here
	int x,n;
  cin>>x>>n;
  int ans=power(x,n);
  cout<<ans<<endl;
  
}
int power(int x,int n)
{
  if(x==0&&n==0)
  {
return 1;}
  if(x==0)
  {
return 0;}
  if(n==0)
  {
return 1;}
  int smallans=power(x,n/2);
  if(n%2==0)
  {
    return smallans*smallans;
  }
  else
  {
    return x*smallans*smallans;
  }
}

