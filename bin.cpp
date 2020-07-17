#include <iostream>
using namespace std;
int evenFibSum(int n){
	int a=-1,b=1;
	int sum=0;
	for(int i=1;i<=n;i++){
		int c=a+b;
		if(c%2==0){
		sum=sum+c;	
		}
		a=b;
		b=c;
		
	}
	return sum;
}

int main(){
    int n;
    cin >> n;
    cout << evenFibSum(n);
}

