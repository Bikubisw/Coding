#include<iostream>
#include<climits>
using namespace std;
int MissingNumber(int*arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j&&arr[i]==arr[j]){
				return arr[i];
			}
		}
		
	}
	return INT_MIN; 
	
	
	
	
	
/*	int sum1=0;
	int sum2=((n-2)*(n-1))/2;
	for(int i=0;i<n;i++){
		sum1=sum1+arr[i];
	}
	return sum1-sum2;*/
	
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	int ans=MissingNumber(arr,n);
	cout<<ans<<endl;
	return 0;
}
