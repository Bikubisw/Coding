#include <iostream>
using namespace std;
#include<vector>
#include<queue>
int kLargest(vector<int>input, int n, int k){
    priority_queue<int, vector<int>,greater<int> > pq;
    for(int i=0;i<k;i++){
    	pq.push(input[i]);
	}
	    for(int i=k;i<n;i++){
			if(pq.top()<input[i]){
				pq.push(input[i]);
				pq.pop();
			}
			else{
			continue;
			}
}
		int min=INT_MAX;
		while(!pq.empty()){
			if(pq.top()<min){
				min=pq.top();
			}
			pq.pop();
		}
		return min;
}
int main() {
  int n, k, s;
    vector<int> arr;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>s;
        arr.push_back(s);
    }
    cin >> k;
    cout <<kLargest(arr, n, k) << endl;
}

