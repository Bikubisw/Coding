#include <iostream>
using namespace std;
bool checkMaxHeap(int arr[], int n){
	int parentindex=0;
	int leftindex=2*parentindex+1;
	int rightindex=2*parentindex+2;
	while(leftindex<n){
		if(arr[parentindex]<=arr[leftindex]||arr[parentindex]<=arr[rightindex]){
			return false;
		}
		parentindex++;
		leftindex=2*parentindex+1;
		rightindex=2*parentindex+2;
		
	}
	return true;
}
int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool ans = checkMaxHeap(arr, n);
    if(ans){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    delete [] arr;
}

