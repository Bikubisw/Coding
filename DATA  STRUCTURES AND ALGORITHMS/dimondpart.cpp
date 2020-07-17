#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
	
	int k=1;
	while(k<=i){
		cout<<" ";
		k++;
	}
	int j=1;
	while(j<=n-i+1){
		cout<<"*";
		j++;
	}
	cout<<endl;
	i++;

	
}	
}

