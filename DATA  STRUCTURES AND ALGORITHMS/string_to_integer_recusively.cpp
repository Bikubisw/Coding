#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int stringToNumber(char *input){
	if(strlen(input)==1){
		return input[0]-'0';
	}
	int smallans=stringToNumber(input+1);
	int b=input[0]-'0';
	return b*pow(10,strlen(input)-1)+smallans;
	
}
int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

