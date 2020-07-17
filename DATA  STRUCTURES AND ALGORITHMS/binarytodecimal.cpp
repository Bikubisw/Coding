#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
    cin>>n;
    int sum=0;
    int i=0;
    while(n>0){
        
    int rem=n%10;
        sum=sum+rem*pow(2,i);
        n=n/10;
        i++;
        
    }
    cout<<sum<<endl;
	
}

