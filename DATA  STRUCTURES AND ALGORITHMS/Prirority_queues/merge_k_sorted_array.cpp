#include<bits/stdc++.h>
using namespace std;
vector<int> mergekSortedarray(vector<vector<int>*> input){
	vector<int> output;
	priority_queue<int,vector<int>,greater<int>>pq;
	for(int i=0;i<input.size();i++){
		for(int j=0;j<input[i]->size();j++){
			pq.push(input[i]->at(j));
		}
	}
	while(!pq.empty()){
		output.push_back(pq.top());
		pq.pop();
	}
	return output;
}
int main(){
	int t;
	cin>>t;
	vector<vector<int>*> input; 
	while(t--){
		int size;
		cin>>size;
		vector<int>* current=new vector<int>();
		for(int i=0;i<size;i++){
			int a;
			cin>>a;
			current->push_back(a);
		}
		input.push_back(current);
	}
	vector<int> output=mergekSortedarray(input);
	for(int i=0;i<output.size();i++){
		cout<<output[i]<<" ";
	}
	return 0;
}
