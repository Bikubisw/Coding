#include <iostream>
using namespace std;
long maxPathSum(int a[], int b[],int m,int n)
{
    
    int i = 0, j = 0; 
  int  result = 0, sum1 = 0, sum2 = 0; 
   while (i < m && j < n) 
    {if (a[i] < b[j]) 
            sum1 += a[i++]; 
  
        
        else if (a[i] > b[j]) 
            sum2 += b[j++]; 
  
        else   
        { 
            
            result += max(sum1, sum2); 
  
         
            sum1 = 0, sum2 = 0; 
  
          
            while (i < m &&  j < n && a[i] == b[j]) 
            { 
                result = result + a[i++]; 
                j++; 
            } 
        } 
    } 
  while (i < m) 
        sum1  +=  a[i++]; 
  
    
    while (j < n) 
        sum2 +=  b[j++]; 
  
  
    result +=  max(sum1, sum2); 
  
    return result; 
    
  while (i < m)
        sum1  +=  a[i++];
    while (j < n)
        sum2 +=  b[j++];
 
    result +=  max(sum1, sum2);
 
    return result;
}

int main() {
    int *a,*b,m,n,i;
    cin>>m;
    a=new int[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    b=new int[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    long ans = maxPathSum(a,b,m, n);
    cout << ans << endl;
    delete a;
    delete b;
    return 0;
}

