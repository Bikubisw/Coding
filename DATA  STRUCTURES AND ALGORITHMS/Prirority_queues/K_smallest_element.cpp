#include<iostream>
using namespace std;
#include <vector>
#include<queue>
vector<int> kSmallest(int *input, int n, int k) {
		priority_queue<int> pq;
		for(int i=0;i<k;i++){
			pq.push(input[i]);
		}
		for(int i=k;i<n;i++){
			if(pq.top()>input[i]){
				pq.push(input[i]);
				pq.pop();
			}
			else{
				continue;
			}
		}
		vector<int> p;
		while(!pq.empty()){
			p.push_back(pq.top());
			pq.pop();
		}
		return p;
	
}
int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	int k;
	cin >> k;
	vector<int> output = kSmallest(input, n, k);
	for(int i = 0; i < output.size(); i++){
		cout << output[i] << endl;
	}
}

