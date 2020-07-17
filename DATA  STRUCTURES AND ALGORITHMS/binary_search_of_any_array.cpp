#include<iostream>
using namespace std;
int bubble_sort(int arr[][100],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col-1;j++){
			for(int k=0;k<col-1-j;k++){
				if(arr[i][k]>arr[i][k+1]){
					int temp=arr[i][k];
					arr[i][k]=arr[i][k+1];
					arr[i][k+1]=temp;
				}
			}
		}
	}
}
void binary_search(int arr[][100],int row, int col ,int key){
	for(int i=0;i<row;i++){
			int low=0,high=col-1;
			while(low<=high){
				int mid=(low+high)/2;
				if(arr[i][mid]==key){
					cout<<"the key is found at position:"<<"("<<i<<","<<mid<<")"<<endl;
					break;
				}
				else if(key>arr[i][mid]){
					low=mid+1;
				}
				else{
					high=mid-1;
				}
			}
		}
	}


int main(){
	int row,col;
	cin>>row>>col;
	int arr[100][100];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	bubble_sort(arr,row,col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int key;
	cin>>key;
	binary_search(arr,row,col,key);	
	
	return 0;
}
