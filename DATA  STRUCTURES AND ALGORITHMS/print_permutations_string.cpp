#include<iostream>
using namespace std;
void print_permutationshelper(string input,string output){
	if(input[0]=='\0'){
		cout<<output<<endl;
		return ;
	}
	for(int i=0;i<=output.length();i++)
	{print_permutationshelper(input.substr(1),output.substr(0,i)+input[0]+output.substr(i));
		
	}
}
void print_permutations(string input){
	string output="";
	print_permutationshelper(input,output);
}
int main(){
	string input;
	cin>>input;
	print_permutations(input);
	return 0;
}
