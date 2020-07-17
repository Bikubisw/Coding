#include<iostream>
#include<unordered_map>
using namespace std;
void PairSum(int *input, int n) {	 
	unordered_map<int,int> map;
	for(int i=0;i<n;i++){
		map[input[i]]++;
	}
	
	for(int i=0;i<n;i++){
		int k=input[i];
		if(map[k]!=0 && map.count(-k)!=0){	
		int count=map[k]*map[-k];
		for(int i=0;i<count;i++){
			cout<<min(k,-k)<<" "<<max(k,-k)<<endl;
		}
		map[k]=0;
		map[-k]=0;		
		}
	}
}
int main()
{
	int n;
    int arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    PairSum(arr, n);
    return 0;
}

