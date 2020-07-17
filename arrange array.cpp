#include<iostream>
using namespace std;
void arrange(int *arr,int n){
	int val=1;
int start=0;
int end=n-1;
if(n%2==0){
while(val<=n){
	arr[start]=val;
		val++;
		arr[end]=val;
		val++;
		start++;
		end--;
	}
	}
	else
	{
		while(val<=n){
	arr[start]=val;
		val++;
		arr[end]=val;
		val++;
		start++;
		end--;
	}
	arr[n/2]=n;
	
		
	}


}


int main(){
  int n;  
  cin >> n;
  
  int* arr = new int[n];
  arrange(arr,n);
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  delete arr;
}



