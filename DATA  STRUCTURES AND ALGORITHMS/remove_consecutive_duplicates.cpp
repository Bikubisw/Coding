#include <iostream>
using namespace std;
 void removeConsecutiveDuplicates(char input[]){
 	char lastchar=input[0];
 	int j=1;
 	for(int i=1;input[i]!='\0';i++){
 		if(input[i]==lastchar){
 			continue;
		 }
		 else{
		 	input[j]=input[i];
		 	lastchar=input[i];
		 	j++;
		 }
 		
	 }
	 input[j]='\0';
 }
int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}
