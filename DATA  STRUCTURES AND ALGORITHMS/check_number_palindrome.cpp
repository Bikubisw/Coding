#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long n;
	cin>>n;
	long sum=0;
	long temp=n;
	while(temp>0){
	long rem=temp%10;
	sum=sum+rem;
	temp=temp/10;
	}
	cout<<sum<<endl;

}
