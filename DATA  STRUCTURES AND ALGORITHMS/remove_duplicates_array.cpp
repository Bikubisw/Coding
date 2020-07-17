#include<iostream>
using namespace std;
void removeduplicates(int *arr,int n){
int j=0;
for(int i=1;i<n;i++){
if(arr[i]==arr[i+1]){
continue;}

    else{
arr[j]=arr[i];
    j++;}
}
for(int i=0;i<j;i++){
	cout<<arr[i]<<" ";
}

}
int main(){
    int n;
    cin>>n;
    int*arr=new int[n+1];
    for(int i=0;i<n;i++){
cin>>arr[i];}
    removeduplicates(arr,n);
    return 0;}


