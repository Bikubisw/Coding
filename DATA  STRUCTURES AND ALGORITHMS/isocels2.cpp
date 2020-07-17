#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;

while(i<=n){
	int space=1;
	while(space<=n-i){
		cout<<" ";
		space++;
	}
	int j=i;
	while(j<=2*i-1){
		cout<<j;
		j++;
	}

j=i-1;
int k=2*i-2;
while(j>=1)
{
	cout<<k;
	j--;
	k--;
}
cout<<endl;
i++;
}
	
	
	
}
