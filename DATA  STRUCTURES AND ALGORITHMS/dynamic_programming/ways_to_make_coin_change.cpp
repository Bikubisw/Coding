#include<iostream>
using namespace std;
int countWaysToMakeChange(int denominations[], int numDenominations, int value){
	if(value<0){
		return 0;
	}
	if(value==0){
		return 1;
	}
	if (numDenominations<=0 && value>= 1) 
        return 0; 
	int ans;
	int a=countWaysToMakeChange(denominations,numDenominations,value-denominations[0]);
	int b=countWaysToMakeChange(denominations,numDenominations-1,value);
	ans=a+b;
	return ans;
}

int main(){
  int numDenominations;
  cin >> numDenominations;
  int* denominations = new int[numDenominations];
  for(int i = 0; i < numDenominations; i++){
    cin >> denominations[i];
  }
  int value;
  cin >> value;

  cout << countWaysToMakeChange(denominations, numDenominations, value);

}



