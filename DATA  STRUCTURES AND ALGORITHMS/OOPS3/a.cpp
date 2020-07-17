#include<bits/stdc++.h>
using namespace std;
void merging(int *input,int start,int end){
    int size=end-start+1;
    int mid=(start+end)/2;
    int k=0;
    int i=start;
    int j=mid+1;
    int *output=new int[size];
    while (i<=mid&&j<=end)
    {
        if(input[i]<input[j]){
            output[k++]=input[i++];
        }else{
            output[k++]=input[j++];
        }
    }
    while (i<=mid)
    {
        output[k++]=input[i++];
    }
    while(j<=end){
        output[k++] = input[j++];
    }
    int m=0;
    for(int i=start;i<=end;i++){
        input[i]=output[m++];
    }
    delete []output;
}
void mergesorthelper(int *input, int start,int end)
{
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    mergesorthelper(input,start,mid);
    mergesorthelper(input,mid+1,end);
    merging(input,start,end);
}
void mergesort(int *input, int n){
    mergesorthelper(input,0,n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];

    }
    mergesort(input,n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    delete[] input;

}
