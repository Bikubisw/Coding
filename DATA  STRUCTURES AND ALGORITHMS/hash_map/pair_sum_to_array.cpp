#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;
void pairsum_inarray(int* arr,int n,int k){
	unordered_map<int,int> ourmap;
	for(int i=0;i<n;i++){
		ourmap[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		int key=arr[i];
		if(k==0){
		if(ourmap[key]!=0&&ourmap.count(-key)!=0){
		int count=ourmap[key]*ourmap[-key];
		for(int i=0;i<count;i++){
			cout<<min(key,-key)<<" "<<max(key,-key)<<endl;
		}
		ourmap[key]=0;
		ourmap[-key]=0;
		}
	}
		else if(ourmap[key]!=0&&ourmap.count(k-key)!=0){
			int count=ourmap[key]*ourmap[k-key];
			for(int i=0;i<count;i++){
				cout<<min(key,k-key)<<" "<<max(key,k-key)<<endl;
			}
			ourmap[key]=0;
			ourmap[k-key]=0;
		}
		else if(ourmap[key]!=0&& ourmap.count((-1*key)+k)!=0){
			int count=ourmap[key]*ourmap[(-1*key)+k];
			for(int i=0;i<count;i++){
				cout<<min(key,(-1*key)+k)<<" "<<max(key,(-1*key)+k)<<endl;
			}
			ourmap[key]=0;
			ourmap[(-1*key)+k]=0;	
		}
		
	}
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	pairsum_inarray(arr,n,k);
}
