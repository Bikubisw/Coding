#include<iostream>
#include<unordered_map>
using namespace std;
int lengthOfLongestSubsetWithZeroSum(int *arr,int n){
	unordered_map<int,int> ourmap;
	for(int i=1;i<n;i++){
		arr[i]=arr[i]+arr[i-1];
	}
	int maximum=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			if(i+1>maximum){
				maximum=i+1;
			}
		}
			else if(ourmap.count(arr[i])>0){
				if(i-ourmap[arr[i]]>maximum){
					maximum=i-ourmap[arr[i]];
				}
			}
			else{
				ourmap[arr[i]]=i;
			}
		
	}
	return maximum;
	
}
int main(){
  int size;
  
  cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  int ans = lengthOfLongestSubsetWithZeroSum(arr,size);
  cout << ans << endl;
  delete arr;
}



