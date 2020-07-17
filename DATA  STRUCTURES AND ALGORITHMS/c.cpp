#include<iostream>
using namespace std;

int main() {
    int input[1000][1000];
    int row,col;
    cin>>row>>col;
	for(int i=0;i<row;i++) {
	    for(int j=0;j<col;j++) {
	        cin>>input[i][j];
	    }
    }
}
