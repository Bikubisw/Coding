#include<bits/stdc++.h>
using namespace std;
void wavePrint(int arr[][100],int row,int col){
for(int j=0;j<col;j++){
	if(j%2==0){
		
		for(int i=0;i<row;i++){
			cout<<arr[i][j]<<" ";
		} 
	}
	else{
		for(int i=row-1;i>=0;i--){
			cout<<arr[i][j]<<" ";
		}
	}
	}
}	
int main() {
    int row,col;
    cin>>row>>col;
    int input[100][100];
	for(int i=0;i<row;i++) {
	    for(int j=0;j<col;j++) {
	        cin>>input[i][j];
	    }
    }
    wavePrint(input,row,col);
    return 0;
}
