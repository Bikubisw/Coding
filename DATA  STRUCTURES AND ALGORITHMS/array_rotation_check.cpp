#include<iostream>
using namespace std;
int rotation(int*arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
			count++;
		}
		else{
			break;
		}
	}
	return count;
	
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=rotation(arr,n);
	cout<<ans<<endl;
	return 0;
}
