#include <iostream>
using namespace std;
void merge(int*input,int start,int end){
	int size=end-start+1;
	int mid=(start+end)/2;
	int *output=new int[size];
	int i=start;
	int j=mid+1;
	int k=0;
	while(i<=mid&&j<=end){
		if(input[i]<input[j]){
			output[k++]=input[i++];
		}
		else{
			output[k++]=input[j++];
		}
		
	}
	while(i<=mid){
		output[k++]=input[i++];
	}
	while(j<=end){
		output[k++]=input[j++];
	}
	int m=0;
	for(int i=start;i<=end;i++){
	input[i]=output[m++];
	}
	delete[]output;
	
}
void mergesorthelper(int input[],int start,int end){
	if(start>=end){
		return;
	}
	int mid=(start+end)/2;
	mergesorthelper(input,start,mid);
	mergesorthelper(input,mid+1,end);
	merge(input,start,end);
}
void mergeSort(int *input,int size){
	mergesorthelper(input,0,size-1);
}
int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}

