#include<iostream>
#include <algorithm>
using namespace std;
int FindUnique(int arr[], int size){
    int ele=0;
    for(int i=0;i<size;i++){
    ele=ele^arr[i];
    }
    return ele;
}
int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindUnique(input,size)<<endl;
		
	return 0;
}

