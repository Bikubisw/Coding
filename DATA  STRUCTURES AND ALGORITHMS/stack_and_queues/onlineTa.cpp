#include <bits/stdc++.h> 
using namespace std; 
  
// function that calculates the 
// maximum no. of cuts 
int numberOfCuts(int M, int N) 
{ 
	if(M%2==0){
		return (N/M)+1;
	}
	else{
		return (N/M)+2;
	}
} 
  
// Driver Code 
int main() 
{ 
    int M,N;
    cin>>M>>N;
  
    // Calling function. 
    int Cuts = numberOfCuts(M, N); 
  
    cout << "Maximum cuts = " << Cuts; 
  
    return 0; 
} 
