#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	unordered_map<int,int> elementtoindexmaping;
	unordered_map<int,bool> visitedelements;
	for(int i=0;i<n;i++){
		elementtoindexmaping[arr[i]]=i;
		if(visitedelements.count(arr[i])==0){
			visitedelements[arr[i]]=true;
		}
	}
	vector<int> sequence;
	int globalmaxlength=1;
	int globalminstartindex=0;
	for(int i=0;i<n;i++){
		int num=arr[i];
		int currentminstartindex=i;
		int tempnum=num;
		int count=0;
		int currentindex=num+arr[i];
		while(visitedelements.count(tempnum)==1 && visitedelements[tempnum]==true){
			visitedelements[tempnum]=false;
			count++;
			tempnum++;
		}
		tempnum=num-1;
		while(visitedelements.count(tempnum)==1 && visitedelements[tempnum]==true){
			visitedelements[tempnum]=false;
			count++;
			currentminstartindex=elementtoindexmaping[tempnum];
			tempnum--;
		}
		if(count>globalmaxlength){
		globalmaxlength=count;
		globalminstartindex=currentminstartindex;
		}
		else if(count==globalmaxlength){
			if(currentminstartindex<globalminstartindex){
				globalminstartindex=currentminstartindex;
			}
		}
	}
	int globalstartnum=arr[globalminstartindex];
	sequence.push_back(globalstartnum);
	globalmaxlength--;
	while(globalmaxlength!=0){
		globalstartnum++;
		sequence.push_back(globalstartnum);
		globalmaxlength--;
	}
	return sequence;
}
int main(){
  int size;
  cin >> size;
  int* arr=new int[size];
  for(int i = 0; i < size; i++){
    cin>>arr[i];
  }
  vector<int> ans = longestConsecutiveIncreasingSequence(arr,size);
  for (auto it = ans.cbegin(); it != ans.cend(); it++) {
	cout << *it <<endl;
  }
  delete arr;
}
