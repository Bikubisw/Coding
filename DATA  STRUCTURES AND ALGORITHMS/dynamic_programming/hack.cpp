#include<bits/stdc++.h>
#define MOD 1000000000+7
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
long long primePermutations (int N) {
   long long count=0;
   for(int i=2;i<=N;i++){
   	bool flag=false;
   	for(int d=2;d<i;d++){
   		if(i%d==0){
   			flag=true;
   			break;
		   }
	   }
	   if(flag==false){
	   	count++;
	   }
   }
   return factorial(N-count)*factorial(count);
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
 
    long long out_;
    out_ = primePermutations(N);
    cout << out_;
}
