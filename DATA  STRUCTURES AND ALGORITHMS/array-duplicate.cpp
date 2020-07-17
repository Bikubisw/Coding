#include<iostream>
#include<climits>
using namespace std;
void duplicate(int *arr,int n){
	int*output=new int[1000];
	for(int i=0;i<1000;i++){
		output[i]=0;
	}
	for(int i=0;i<n;i++){
		int index=arr[i];
		output[index]++;
	}
	for(int i=0;i<1000;i++){
		if(output[i]>1){
			cout<<i<<" "<<output[i]<<endl;
		}
	}
}
int main(){
	int n;
	 cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	duplicate(arr,n);
	return 0;
}
