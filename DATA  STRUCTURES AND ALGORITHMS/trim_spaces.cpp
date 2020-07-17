#include<iostream>
using namespace std;
void trimSpaces(char str[]) {
int j=0;
for(int i=0;str[i]!='\0';i++){
	if(str[i]!=' '){
		str[j]=str[i];
		j++;
	}
}
str[j]='\0';
}
int main(){
	char input[100];
	cin.getline(input,100);
	trimSpaces(input);
	cout<<input<<endl;
	return 0;
}
