#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int countStepsTo1helper(int n,int *arr){
	if(n<=1){
		return 0;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	int a=countStepsTo1helper(n-1,arr);
	int b=INT_MAX,c=INT_MAX;
	if(n%2==0){
	 b=countStepsTo1helper(n/2,arr);
}
	if(n%3==0){
		 c=countStepsTo1helper(n/3,arr);
	}
	int ans=1+min(a,min(b,c));
	arr[n]=ans;
	return ans;
}
int countStepsTo1(int n){
	int *arr=new int[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
	countStepsTo1helper(n,arr);
}
int main(){

  int n;
  cin  >> n;
  cout << countStepsTo1(n) << endl;
}

