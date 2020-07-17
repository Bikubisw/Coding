#include <iostream>
#include<cstring>
using namespace std;
void pairStarhelper(char *input,int start){
	if(input[start]=='\0'||input[start+1]=='\0'){
		return ;
	}
	pairStarhelper(input,start+1);
	if(input[start]==input[start+1]){
		for(int i=strlen(input);i>=start+1;i--)
{		input[i+1]=input[i];
	
		}
		input[start+1]='*';
				
	}
	
	
	
}
void pairStar(char input[]){
	return pairStarhelper(input,0);
}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

