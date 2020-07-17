#include <bits/stdc++.h>
using namespace std;
void findMedian(int* arr,int n){
	priority_queue<int,vector<int>,greater<int>> minheap;
	priority_queue<int> maxheap;
	for(int i=0;i<n;i++){
		if(minheap.size()&&arr[i]>minheap.top()){
			minheap.push(arr[i]);
		}
		else{
			maxheap.push(arr[i]);
		}
		if(abs(maxheap.size()-minheap.size())>1){
			if(maxheap.size()>minheap.size()){
				int temp=maxheap.top();
				maxheap.pop();
				minheap.push(temp);
			}
			else{
				int temp=minheap.top();
				minheap.pop();
				maxheap.push(temp);
				}
			}
			int median;
			int totalsize=maxheap.size()+minheap.size();
			if(totalsize%2!=0){
				if(maxheap.size()>minheap.size()){
					median=maxheap.top();
				}
				else{
					median=minheap.top();
				}
			}
			else{
				median=0;
				if(maxheap.empty()==false){
					median=median+maxheap.top();
				}
				if(minheap.empty()==false){
					median=median+minheap.top();
				}
				median/=2;
			}
			cout<<median<<endl;
		}
	
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    findMedian(arr, n);
    
    delete [] arr;
    
}

