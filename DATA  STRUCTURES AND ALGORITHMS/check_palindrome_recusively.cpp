#include <iostream>
#include<cstring>
using namespace std;
bool checkPalindromehelper(char*input,int start,int end){
	if(start>=end){
		return true;
	}
	if(input[start]!=input[end]){
		return false;
	}
	return checkPalindromehelper(input,start+1,end-1);
}
bool checkPalindrome(char*input){
	int start=0;
	int end=strlen(input)-1;
	if(checkPalindromehelper(input,start,end)){
		return true;
	}
	else{
		return false;
	}
} 
int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
