#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int value){
	for(int i=0;i<n;i++){
		if(arr[i]==value){
			return i;
			
		}
		
		}
		return -1;
		
	}

int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int c;
	cin>>c;
	int ans=linearsearch(arr,n,c);
	cout<<ans<<endl;

	return 0;
}
