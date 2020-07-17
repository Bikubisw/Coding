#include<iostream>
using namespace std;
int mcm(int* p, int n){
	
}
int main(){

  int n; 
  cin >> n;
  int* p = new int[n];

  for(int i = 0; i <= n; i++){
    cin >> p[i];
  }

  cout << mcm(p, n);

}



