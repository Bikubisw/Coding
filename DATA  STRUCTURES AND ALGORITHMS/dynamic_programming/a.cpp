#include<bits/stdc++.h>
using namespace std;
int maximumsum(int*arr,int n,int k){
	vector<vector<int>> output;
	for(int i=0;i<k;i++){
		output[0].push_back(arr[i]);
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
		cout<<maximumsum(arr,n,k)<<endl;
	}
	return 0;
}
