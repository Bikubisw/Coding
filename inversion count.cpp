#include<bits/stdc++.h>
using namespace std;
long long merge(int *arr,int start,int end)
{
	long long count=0;
	int size=end-start+1;
	int mid=(start+end)/2;
	int*output=new int[size];
	int i=start;
	int j=mid+1;
	int k=0;
	while(i<=mid&&j<=end){
		if(arr[i]<arr[j]){
		output[k]=arr[i];
		i++;
		k++;	
		}else{
			output[k++]=arr[j++];
		count+=mid-i;	
			
		}
	}
		while(i<=mid){
			output[k]=arr[i];
			k++;
			i++;
		}
			while(j<=end){
			output[k]=arr[j];
			k++;
			j++;
		}
		int m=0;
		for(int i=start;i<=end;i++){
			arr[i]=output[m];
			m++;
		}
		return count;
		delete[]output;
	
}
long long mergesort(int*arr,int start,int end){
	long long count =0;
	if(start<end){
		int mid=(start+end)/2;
		long long countleft=mergesort(arr,start,mid);
		long long countright=mergesort(arr,mid+1,end);
		long long mycount=merge(arr,start,end);
		return countleft+countright+mycount;
		}
	return count;
}
long long solve(int*a,int n){
	long long ans=mergesort(a,0,n-1);
	return ans;
	
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			}
			cout<<solve(arr,n)<<endl;
return 0;
}
