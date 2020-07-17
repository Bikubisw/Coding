#include<iostream>
#include<string>
using namespace std;

void printAllPossibleCodeshelper(string input,string output){
	if(input[0]=='\0'){
		cout<<output<<endl;
		return;
	}
	int start=input[0]-48;
	char startchar=start+'a'-1;
	char secondchar='\0';
	printAllPossibleCodeshelper(input.substr(1),output+startchar);
	
	if(input[1]!='\0'){
		int second=start*10+input[1]-48;
		if(second>=10&&second<=26){
			secondchar=second+'a'-1;
	printAllPossibleCodeshelper(input.substr(2),output+secondchar);
		}
		
	}

}
void printAllPossibleCodes(string input){
	string output="";
	printAllPossibleCodeshelper(input,output);
}
int main(){
	string input;
	cin>>input;
	printAllPossibleCodes(input);
    return 0;
}
