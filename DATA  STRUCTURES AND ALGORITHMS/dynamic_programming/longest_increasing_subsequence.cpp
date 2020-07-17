#include <iostream>
using namespace std;
int lis(int *input,int n){
	int *output=new int[n];
	output[0]=1;
	for(int i=1;i<n;i++){
		output[i]=1;
		for(int j=i-1;j>=0;j--){
			if(input[j]>input[i]){
				continue;
			}
			int possibleans=output[j]+1;
			if(possibleans>output[i]){
				output[i]=possibleans;
			}
		}
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(output[i]>max){
			max=output[i];
		}
	}
	delete []output;
	return max;
	
}
int main(){
    int n;
    cin >> n;
    int arr[100000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << lis(arr, n);
}


