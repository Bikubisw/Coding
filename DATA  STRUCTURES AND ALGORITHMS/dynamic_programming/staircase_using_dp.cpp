#include<iostream>
using namespace std;
long staircase_problem(int n,long* arr){

if(n==0){
 	return 1 ;
 }
 if(n==1){
 	return 1;
 }
 if(arr[n]!=-1){
 	return arr[n];
 }   
long a=staircase_problem(n-1,arr);
long b=staircase_problem(n-2,arr);
long c=staircase_problem(n-3,arr);
arr[n]=a+b+c;   
return a+b+c; 
}
long staircase(int n){
	long* arr=new long[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
}
int main(){
  int n; 
  cin >> n ;
  cout << staircase(n) << endl;
}

