#include<iostream>
#include<stack>
using namespace std;
int* stockSpan(int* price,int size){
	stack<int> s;
	int*output=new int[size];
	s.push(0);
	output[0]=1;
	for(int i=1;i<size;i++){
		while(!s.empty()&& price[s.top()]<price[i]){
			s.pop();
		}
		if(s.empty())
	{
		output[i]=i+1;
	}
	else{
		output[i]=i-s.top();
	}
	s.push(i);
		}
	return output;
			
	}

int main(){
	int size;
	cin>>size;
	int *arr=new int[size+1];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int* output=stockSpan(arr,size);
	for(int i=0;i<size;i++){
		cout<<output[i]<<" ";
	}
	return 0;
}
