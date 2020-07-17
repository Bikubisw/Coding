#include<iostream>
#include<climits>
using namespace std;
void findLargest(int arr[][1000], int row, int col){
	
 	int largestsum=INT_MIN;
	bool isrow=true;
	int num=0;
	for(int i=0;i<row;i++){
	int row_sum=0;
	for(int j=0;j<col;j++){
		row_sum=row_sum+arr[i][j];
	}
	if(row_sum>largestsum){
		largestsum=row_sum;
		num=i;
	}
}
	for(int j=0;j<col;j++){
	int column_sum=0;
	for(int i=0;i<row;i++){
		column_sum=column_sum+arr[i][j];
		
	}
	if(column_sum>largestsum){
		largestsum=column_sum;
		num=j;
		isrow=false;
	}
}
if(isrow){
	cout<<"row"<<" "<<num<<" "<<largestsum;
}
else{
		cout<<"column"<<" "<<num<<" "<<largestsum;

}

}
int main() {
    int row, col;
    cin >> row >> col;
    int input[1000][1000]; 
    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    findLargest(input,row,col);
    return 0;
}
