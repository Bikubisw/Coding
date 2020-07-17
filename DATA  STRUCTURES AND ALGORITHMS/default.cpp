#include<iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=0){
	return a+b+c+d;
}
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ans=sum(a,b,c,d);
	cout<<ans<<endl;
}
