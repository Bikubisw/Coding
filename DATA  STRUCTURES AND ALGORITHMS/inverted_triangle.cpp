#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		int val=n-i+1;
		while(j<=n-i+1){
			cout<<val;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
