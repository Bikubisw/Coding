#include<iostream>
using namespace std;
void pairSum(int input[], int size, int x) {
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(input[i]+input[j]==x){
				if(input[i]>input[j]){
					cout<<input[j]<<" "<<input[i]<<endl;
				}
				else{
					cout<<input[i]<<" "<<input[j]<<endl;
				}
			}
		}
	}
	
}
int main(){
	int n;
	cin>>n;
	int*arr=new int[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	pairSum(arr,n,x);
	
	return 0;
}
