#include <iostream>
using namespace std;
int maximum(int*arr,int n){
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min)
		{min=arr[i];
			
		}
	}
	return max;
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
cout<<maximum(arr,n)<<endl;
		return 0;
}
