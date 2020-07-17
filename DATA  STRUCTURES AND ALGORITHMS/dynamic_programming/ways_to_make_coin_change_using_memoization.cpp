#include<iostream>
using namespace std;
int ways_to_make_coin_change(int n,int* arr,int value,int **dp){
    if(value<0){
        return 0;
    }
    if(value==0){
        return 1;
    }
    if(n<=0&& value>=0){
        return 0;
    }
    if(dp[value][n]!=-1){
        return dp[n][value];
    }
    int a=ways_to_make_coin_change(n,arr,value-arr[0],dp);
    int b=ways_to_make_coin_change(n-1,arr+1,value,dp);
    dp[value][n]= a+b;
    return dp[value][n];
}
int main()
{
    int n;
    cin>>n;
    int*deno=new int[n];
    for(int i=0;i<n;i++){
        cin>>deno[i];
    }
    int k;
    cin>>k;
    int **dp=new int*[k+1];
    for(int i=0;i<k+1;i++){
        dp[i]=new int[n+1];
        for(int j=0;j<n+1;j++){
            dp[i][j]=-1;
        }
    }
cout<<ways_to_make_coin_change(n,deno,k,dp)<<endl;
    return 0;
}
