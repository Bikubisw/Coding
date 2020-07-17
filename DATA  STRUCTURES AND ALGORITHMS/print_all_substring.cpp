#include<iostream>
using namespace std;
 void printSubstrings(char input[]){
 	for(int j=0;input[j]!='\0';j++){
 		for(int k=j;input[k]!='\0';k++){
		 int start=j,end=k;
	 char output[100];
 	int x=0;
 	for(int i=start;i<=end;i++){
 		output[x]=input[i];
 		x++;
	 }
	 output[x]='\0';
	 cout<<output<<endl;
 }
}
}

int main(){
  char str[10000];
  cin.getline(str,10000);
   printSubstrings(str);
}


