#include<iostream>
using namespace std;
void findLargest(int arr[][1000],int row,int col){
	int largest_sum=INT_MIN;
	int num=0;
	bool is_row=true;
	for(int i=0;i<row;i++){
		int row_sum=0;
		for(int j=0;j<col;j++){
			row_sum=row_sum+arr[i][j];
		}
		if(row_sum>largest_sum){
			largest_sum=row_sum;
			num=i;
		}
	}
	for(int j=0;j<col;j++){
		int column_sum=0;
		for(int i=0;i<row;i++){
			column_sum+=arr[i][j];
		}
		if(column_sum>largest_sum){
			largest_sum=column_sum;
			num=j;
			is_row=false;
		}
	}
	if(is_row){
		cout<<"row"<<" "<<num<<" "<<largest_sum<<endl;
	
	}
	else
	{
		cout<<"column "<<" "<<num<<" "<<largest_sum<<endl;
	}
	
}
int main() {
    int row,col;
    cin >>row>>col;
	int input[1000][1000]; 
    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    findLargest(input, row, col);
}
