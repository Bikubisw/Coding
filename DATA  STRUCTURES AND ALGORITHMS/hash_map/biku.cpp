#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
#define MOD 1000000007 
using namespace std;
int FindDistinctCount(int *arr, int n)
{
    if(n<=1){
        return n;
    }
    long count=1;
    unordered_map<int,int> ourmap;
    for(int i=0;i<n;i++){
        ourmap[arr[i]]++;
    }
    unordered_map<int,int>:: iterator it=ourmap.begin();
    while(it!=ourmap.end()){
        count=count*(it->second+1);
        count=count%MOD;
        it++;

    }
    count--;
    return (int)count;

}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<FindDistinctCount(arr,n)<<endl;
}
