#include<iostream>
using namespace std;
int power (int x,int n){
	if(n==0){
		return 1;
		}
		int smallans=power(x,n-1);
	return x*smallans;
}
int main(){
	int x,n;
	cin>>x>>n;
	int ans=power(x,n);
	cout<<ans;
	
	return 0;
}