#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll kadnens(int *arr,n){
	ll currsum=0;
	ll bestsum=INT_MIN;
	for(int i=0;i<n;i++){
		currsum=currsum+arr[i];
		if(bestsum<currsum){
			bestsum=currsum;
		}
		if(currsum<0){
			currsum=0;
		}
			}
	return bestsum;
}
ll maxsumsubarray(int *arr,int n,int k){
	ll kadnenssum=kadnens(arr,n);
	if(k==1){
		return kadnenssum;
		}
		ll currpresum=0,ll currsuffsum=0;
		ll maxcurrpresum=INT_MIN,ll maxcurrsufsum=INT_MIN;
		for(int i=0;i<n;i++){
			currpresum+=arr[i];
			maxcurrpresum=max(currpresum,maxcurrpresum)
			
		}
		ll ans;
		ll totalsum=currpresum;
		for(int i=n-1;i>=0;i++){
		currsuffsum+=arr[i];
		maxcurrsufsum=max(currsuffsum,maxcurrsufsum);	
		}
		if(totalsum<0){
			ans=
		}
		else{
			
		}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int*arr=new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<maxsumsubarray(arr,n,k)<<endl;
	}
	return 0;
}
