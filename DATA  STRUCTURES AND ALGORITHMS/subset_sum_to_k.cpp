#include <iostream>
using namespace std;
int subsetSumToKhelper(int *input,int n,int st,int output[][50],int k){
	if(st==n){
		if(k==0){
			output[0][0]=0;
			return 1;
		}
		else{
			return 0;
		}
	}
	int op1[100][50];
	int op2[100][50];
	int size1=subsetSumToKhelper(input,n,st+1,op1,k);
	int size2=subsetSumToKhelper(input,n,st+1,op2,k-input[st]);
	int row=0;
	for(int i=0;i<size1;i++){
		for(int j=0;j<=op1[i][0];j++){
			output[row][j]=op1[i][j];
		}
		row++;
	}
	for(int i=0;i<size2;i++){
		output[row][0]=op2[i][0]+1;
		output[row][1]=input[st];
		for(int j=1;j<=op2[i][0];j++){
			output[row][j+1]=op2[i][j];
		}
		row++;
	}
	return row;
}
int subsetSumToK(int *input,int n,int output[][50],int k){
	return subsetSumToKhelper(input,n,0,output,k);
} 
int main() {
  int input[20],length, output[100][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}

