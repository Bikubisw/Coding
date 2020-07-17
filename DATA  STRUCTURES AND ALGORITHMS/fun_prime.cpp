#include<iostream>
using namespace std;
bool is_prime(int n){
	int d=2;
	int i=1;
	while(d<n){
		if(n%d==0){
			return false;
		}
		d++;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int k=2;
	while(k<=n){
	bool ans=is_prime(k);
	if(ans){
		cout<<k<<endl;
	}
	k++;
}
	
return 0;	
}
