#include<bits/stdc++.h>
using namespace std;
 
long long primePermutations (int N) {
    long long count=0;
    for(int i=1;i<=N;i++){
        int d=2;
        bool flag=false;
        while(d<i){
            if(i%d==0){
            flag=true;
            break;
            }
            d++;
        }
        if(!flag){
            count++;
        }
    }
    return count;
      

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
