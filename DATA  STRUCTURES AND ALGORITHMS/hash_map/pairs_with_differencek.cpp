#include<iostream>
using namespace std;
#include<unordered_map>
#include<climits>
void printPairs(int *arr, int n, int k) {
	unordered_map<int,int> map;
	for(int i=0;i<n;i++){
		map[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		int key=arr[i];
		if(k==0){
			int a=map[key];
			int count=((a-1)*a/2);
			for(int i=0;i<count;i++){
				cout<<key<<" "<<key<<endl;
			}			
		}
		else{
		if(map[key]!=0&&map.count(key+k)!=0){
			int count1=map[key]*map[key+k];
			for(int i=0;i<count1;i++){
				cout<<min(key,key+k)<<" "<<max(key,key+k)<<endl;
			}	
		}
			if(map[key]!=0&&map.count(key-k)!=0){
			int count2=map[key]*map[key-k];
			for(int i=0;i<count2;i++){
				cout<<min(key,key-k)<<" "<<max(key,key-k)<<endl;
			}	
		}	
	}
	map[key]=0;
}
	
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
	printPairs(input, n, k);
}

