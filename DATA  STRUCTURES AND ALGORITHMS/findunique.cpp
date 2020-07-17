#include<iostream>
using namespace std;
int FindUnique(int * arr, int size){
	int val=arr[0];
	for(int i=1;i<size;i++){
		val=arr[i]^val;
	}
	return val;
	
	
}
int main(){
int n;
cin>>n;
int*arr=new int[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}	
int ans=FindUnique(arr,n);
cout<<ans<<endl;

}
  
