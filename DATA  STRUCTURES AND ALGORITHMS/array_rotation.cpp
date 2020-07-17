#include <iostream>
using namespace std;
void reverse(int*arr,int i,int j){
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}
void Rotate(int*arr,int d,int n){
	/*int temp;
	for(int i=0;i<d;i++){
		 temp=arr[0];
		for(int j=0;j<size-1;j++){
			arr[j]=arr[j+1];
		}
		arr[size-1]=temp;
	}*/
	if(d>=n){
		d=d%n;
	}
	reverse(arr,0,n-1);
	reverse(arr,0,n-d-1);
	reverse(arr,n-d,n-1);
}
int main() {

	int size;
	int d;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin >> d;
    
    Rotate(input,d,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;

}

