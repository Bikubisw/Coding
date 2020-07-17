#include <iostream>
using namespace std;
int FindSortedArrayRotation(int arr[], int n) {
    int min=arr[0]; 
	int minindex;
    for(int i=0;i<n;i++){
    if(min>arr[i]){
        {min=arr[i];
        minindex=i;}
}

}
return minindex;

}

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindSortedArrayRotation(input,size);
	
	return 0;

}

