#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int*arr=new int[2*n+1];
	for(int i=0;i<2*n+1;i++){
		cin>>arr[i];
	}
	int temp=0;
	for(int i=0;i<size;i++){
		temp=temp^arr[i];
	}
	cout<<temp<<endl;
return 0;
}
