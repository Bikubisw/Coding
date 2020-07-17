#include <iostream>
using namespace std;
int getMaxMoneyhelper(int arr[], int n,int*output){
	if(n<=0){
		return 0;
	}
	if(output[n]!=-1){
		return output[n];
	}
	int a=arr[0]+getMaxMoneyhelper(arr+2,n-2,output);
	int b=getMaxMoneyhelper(arr+1,n-1,output);
	int ans=max(a,b);
	output[n]=ans;
	return ans;
}
int getMaxMoney(int *arr,int n){
	int *output=new int[n+1];
	for(int i=0;i<n+1;i++){
		output[i]=-1;
	}
	return getMaxMoneyhelper(arr,n,output);
}
int main(){
    int n;
    cin >> n;
    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << getMaxMoney(arr, n);
}


