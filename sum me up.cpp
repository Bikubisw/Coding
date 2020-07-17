#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		int sum=0;
		cin>>num;
		while(num>0){
		int rem=num%10;
		sum=sum+rem;
		num=num/10;
		}
		cout<<sum<<endl;
		}
	return 0;
	}
