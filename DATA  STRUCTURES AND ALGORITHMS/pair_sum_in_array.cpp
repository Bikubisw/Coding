#include<iostream>
#include<algorithm>
using namespace std;
void pairsum(int*arr,int n,int x){
	sort(arr,arr+n);
	int start=0;
	int end=n-1;
	while(start<end){
		if(arr[start]+arr[end]==x){
			if(arr[start]==arr[end])
			{
				int count=end-start+1;
				int n=count-1;
				int totalcounts=(n*(n+1))/2;
				while(totalcounts>0){
					cout<<arr[start]<<" "<<arr[end]<<endl;
					totalcounts--;
				}
				start=end;
			}
			else{
				int countstart=0;
				int countend=0;
				int temp=arr[start];
				int i=start;
				while(arr[i]==temp&&i<end){
					i++;
					countstart++;
				}
				temp=arr[end];
				int j=end;
				while(arr[j]==temp&&j>start){
					j--;
					countend++;
				}
				start=i;
				end=j;
				int totalcounts=countstart*countend;
				while(totalcounts>0){
					cout<<arr[start-1]<<" "<<arr[end+1]<<endl;
					totalcounts--;
				}
			}
		}
		else if(arr[start]+arr[end]<x){
			start++;
		}
		else{
			end--;
		}
	}
}
int main(){
	int n,x;
	cin>>n;
	int*arr=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	pairsum(arr,n,x);
	return 0;
}
