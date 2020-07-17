#include<iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	long ans=0;
	int pow=1;
	while(n>0){
		int rem=n%2;
		ans=ans+(rem*pow);
		pow*=10;
		n=n/2;
		
		
	}
	cout<<ans<<endl;
	
	return 0;
}
