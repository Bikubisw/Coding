#include<iostream>
using namespace std;
void print_2d_array(int**arr,int row ,int col){
	int k=row;
	for(int i=0;i<row;i++){
		for(int l=k-1;l>=0;l--){
			for(int j=0;j<col;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		k--;
	}
}
int main(){
	int row,col;
	cin>>row>>col;
	int**arr=new int*[row];
	for(int i=0;i<row;i++){
		arr[i]=new int[col];
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	print_2d_array(arr,row,col);
	for(int i=0;i<row;i++){
		delete[]arr[i];
	}
	delete []arr;
	return 0;
}
