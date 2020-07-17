#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=-1;
	int b=1;
	int c;
	for(int i=0;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c<<endl;
	
	return 0;
}
