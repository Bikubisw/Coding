#include<iostream>
using namespace std;
void allprefixes(char input[]){
	for(int i=0;input[i]!='\0';i++){
		for(int j=0;j<=i;j++){
			cout<<input[j];
		}
		cout<<endl;
	}
}
int main(){
	char input[100];
	cin.getline(input,100);
	allprefixes(input);
	return 0;
}
