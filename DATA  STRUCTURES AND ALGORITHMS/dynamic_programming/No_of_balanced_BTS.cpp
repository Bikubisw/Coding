#include<iostream>
#include<cmath>
using namespace std;
int balancedBThelper(int h,int* arr){
	if(h<=1){
		return 1;
	}
	if(arr[h]!=-1){
		return arr[h];
	}
	int mod=(int)(pow(10,9))+7;
	int x=balancedBThelper(h-1,arr);
	int y=balancedBThelper(h-2,arr);
	int temp1=(int)(((long)(x)*x)%mod);
	int temp2=(int)((2*(long)(x)*y)%mod);
	int ans=(temp1+temp2)%mod;
	arr[h]=ans;
	return ans;
}
int balancedBT(int h){
	int* arr=new int[h+1];
	for(int i=0;i<=h;i++){
		arr[i]=-1;
	}
	balancedBThelper(h,arr);
}
int main(){
	int h;
	cin>>h;
	cout<<balancedBT(h)<<endl;
	return 0;
}
