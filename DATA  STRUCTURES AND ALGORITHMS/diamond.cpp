#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int t=1;
	int n1=(n/2)+1;
	while(i<=n1){
		int space=1;
		while(space<=n1-i)
		{
			cout<<" ";
			space++;
		}
		int j=1;
		while(j<=i){
		
			cout<<"*";
			j++;
		}
		j=i-1;
		while(j>=1){
			cout<<"*";
			j--;
		}
		cout<<endl;
		i++;
	}
	int n2=n-n1;
	while(t<=n2){
		int k=1;
		while(k<=t)
		{
			cout<<" ";
			k++;
		}
		int star=1;
		while(star<=n2-t+1){
			cout<<"*";
			star++;
		}
		int l=1;
		while(l<=n2-t){
			cout<<"*";
			l++;
		}
	
	cout<<endl;
		t++;
	}
	return 0;
	
	}
	
