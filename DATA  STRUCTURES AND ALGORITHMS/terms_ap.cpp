#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int count=0;
	while(count!=n){
		int k=3*i+2;
		if(k%4!=0){
			cout<<k<<" ";
			count++;
		}
		i++;
	}
	return 0;
}
