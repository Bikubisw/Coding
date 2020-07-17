#include<iostream>
using namespace std;
int fact(int n){
	if(n==0){
		return 1;
	}
	cout<<n<<endl;
	int smallout=fact(n-1);
	return n*smallout;
}
int main(){
//	int n;
//	cin>>n;
//	int ans=1;
//	for(int i=1;i<=n;i++){
//		ans=ans*i;
//	}
//	cout<<ans<<endl;
//	return 0;
int n;
cin>>n;
cout<<fact(n)<<endl;
}
