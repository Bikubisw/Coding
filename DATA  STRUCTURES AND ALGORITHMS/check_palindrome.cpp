#include<iostream>
using namespace std;

bool checkPalindrome(char str[]){
	int count=0;
	for(int i=0;str[i]!=0;i++)
	{
		count++;
	}
	for(int i=0;i<count/2;i++){
		if(str[i]!=str[count-1])
		{
			return false;
			
		}
		count--;
		
	}
	return true;
}

int main(){

  char str[10000];
  cin.getline(str,10000);

  if(checkPalindrome(str)){
  	cout << "true" << endl; 	
  }else{
  cout << "false" << endl;
  }
}


