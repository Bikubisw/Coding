#include<iostream>
using namespace std;
void find_indices(int*input,int curr,int size,int x,int*output,int &k){
	if(curr==size){
		return;
	}
	if(input[curr]==x){
		output[k]=curr;
		k++;
	}
	
	find_indices(input,curr+1,size,x,output,k);
	
}
int allIndexes(int input[], int size, int x, int output[]) {
int k=0;
find_indices(input,0,size,x,output,k);
return k;

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}



