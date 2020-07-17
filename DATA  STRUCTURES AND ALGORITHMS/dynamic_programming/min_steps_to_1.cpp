#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int countStepsTo1(int n){
	if(n<=1){
		return 0;
	}
	int a=countStepsTo1(n-1);
	int b=INT_MAX,c=INT_MAX;
	if(n%2==0){
	 b=countStepsTo1(n/2);
}
	if(n%3==0){
		 c=countStepsTo1(n/3);
	}
	return 1+min(a,min(b,c));
}
int main(){

  int n;
  cin  >> n;
  cout << countStepsTo1(n) << endl;
}

