#include<iostream>
using namespace std;
long fac(int n){
	int ans=1;
	int i=1;
	while(i<=n){
		ans=ans*i;
		i++;
	}
	return ans;

	
}
int main(){
int n,r;
cin>>n>>r;
long fact_n=fac(n);
long fact_r=fac(r);
long fact_n_r=fac(n-r);
long ans=fact_n/(fact_r*fact_n_r);
cout<<ans<<endl;		
}
