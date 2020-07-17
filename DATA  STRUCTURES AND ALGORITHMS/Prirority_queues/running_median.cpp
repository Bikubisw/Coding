#include <iostream>
using namespace std;
#include<queue>
void findMedian(int arr[], int n){
  	priority_queue<int> maxheap; 
	priority_queue<int,vector<int>,greater<int> > minheap; 
	int mid=arr[0];
	maxheap.push(mid);
	cout<<mid<<endl;
	for(int i=1;i<n;i++){
		int x=arr[i];
		if(maxheap.size()>minheap.size()){
		
			if(x<mid){
				minheap.push(maxheap.top());
				maxheap.pop();
				maxheap.push(x);
			}
			else{
				minheap.push(x);
			}
			mid=(maxheap.top()+minheap.top())/2;
			
		}
		else if(maxheap.size()==minheap.size()){
			if(x<mid){
				maxheap.push(x);
				mid=maxheap.top();
			}
			else{
				minheap.push(x);
				mid=minheap.top();
			}
		}
		else{
			if(x>mid){
				maxheap.push(minheap.top());
				minheap.pop();
				minheap.push(x);
			}
			else{
				maxheap.push(x);
			}
			mid=(maxheap.top()+minheap.top())/2;	
		}
		cout<<mid<<endl;
		
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

