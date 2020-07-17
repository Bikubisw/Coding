#include <iostream>
using namespace std;
int count(int n){
	if(n==0){
		return 0;
	}
	int smallans=count(n/10);
	return 1+smallans;
}
int main(){
	int n;
	cin>>n;
	int ans=count(n);
	cout<<ans<<endl;
	return 0;
}
