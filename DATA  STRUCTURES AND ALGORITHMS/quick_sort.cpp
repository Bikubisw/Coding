#include<iostream>
using namespace std;
int partition(int*arr,int si,int ei){
	int pivot=arr[si];
	int count=0;
	for(int i=si+1;i<=ei;i++){
		if(arr[i]<=pivot){
			count++;
		}
	}
	int pivotindex=count+si;
	arr[si]=arr[pivotindex];
	arr[pivotindex]=pivot;
	int i=si;
	int j=ei;
	while(i<pivotindex&&j>pivotindex){
		if(arr[i]<=pivot){
			i++;
		}
		else if(arr[j]>pivot){
			j--;
		}
		else{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
	}
	return pivotindex;
}
void quickSorthelper(int *input,int si,int ei){
	if(si>=ei){
		return;
	}
	int p=partition(input,si,ei);
	quickSorthelper(input,si,p-1);
	quickSorthelper(input,p+1,ei);
}

void quickSort(int input[], int size) {
  quickSorthelper(input,0,size-1);
}


int main(){
    int n;
    cin >> n;
  int *input = new int[n];
      for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}



