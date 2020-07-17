#include<iostream>
using namespace std;
bool present(int *arr,int n,int x){
	if(n==0){
		return false;
	}
	if(arr[0]==x){
		return true;
	}
	return present(arr+1,n-1,x);

}

int main(){
	int n,x;
	cin>>n>>x;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(present(arr,n,x)){
		cout<<"present";
	}
	else{
		cout<<"absent";
	}
	return 0;
}
