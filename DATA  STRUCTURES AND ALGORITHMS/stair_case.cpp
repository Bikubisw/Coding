#include <iostream>
using namespace std;
long staircase(int n){
	long* arr=new long[n];
	arr[0]=1;
	arr[1]=1;
	arr[2]=2;
	for(int i=3;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
	}
	return arr[n];
}
int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}

