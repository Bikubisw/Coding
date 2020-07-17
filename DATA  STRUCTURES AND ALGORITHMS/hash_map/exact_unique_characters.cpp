#include<iostream>
#include<map>
using namespace std;
char* uniqueChar(char *str){
	map<char,int> ourmap;
	for(int i=0;str[i]!='\0';i++){
		if(ourmap.count(str[i])==0){
			ourmap[str[i]]=1;
		}
		else{
			ourmap[str[i]]++;
		}
	}
	char* output=new char[ourmap.size()];
	int j=0;
	for(int i=0;str[i]!='\0';i++){
		if(ourmap[str[i]]>0){
			output[j]=str[i];
			ourmap[str[i]]=0;
			j++;
		}
	}
	output[j]='\0';
	return output;
}
int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}

