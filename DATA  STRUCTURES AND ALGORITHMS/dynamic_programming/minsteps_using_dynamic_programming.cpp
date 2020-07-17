#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int countStepsTo1(int n)
	int *arr=new int[n+1];
	arr[0]=0;
	arr[1]=0;
	arr[2]=1;
	arr[3]=1;
	for(int i=4;i<=n;i++){
		int count1,count2=INT_MAX,count3=INT_MAX;
		count1=arr[i-1];
		if(i%2==0){
			count2=arr[i/2];
		}
		if(i%3==0){
		count3=arr[i/3];
		}
		arr[i]=1+min(count1,min(count2,count3));
	}
	return arr[n];
	delete arr;
}
int main(){

  int n;
  cin  >> n;
  cout << countStepsTo1(n) << endl;
}

