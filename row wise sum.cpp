#include<iostream>
using namespace std;


int main(){

     int m,n;
     cin>>m>>n;
    int arr[m][n];
    for (int i=0;i<m;i++){
for(int j=0;j<n;j++)
{
    cin>>arr[i][j];
}
    }
       for (int i=0;i<m;i++){
       	int sum=0;
for(int j=0;j<n;j++)
{ 
sum=sum+arr[i][j];
  
}
cout<<sum<<" ";
       }
   }
    
    
   



