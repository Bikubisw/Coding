#include<iostream>
#include<cstring>
using namespace std;
void reverse_word(char str[],int i,int j){
		while(i<j){
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;}
}
void reverse_word_wise(char str[]){
int i;
	//reverse individual word in the string
	int start=0,end=0;
for(i=0;i<strlen(str);i++){
	if(str[i]==' ')
	{end=i-1;
		reverse_word(str,start,end);
		start=i+1;
		end=i+1;
	}
	}
	end=i-1;
	reverse_word(str,start,end);	
	}
int main(){
	char input[100];
	cin.getline(input,100);
	reverse_word_wise(input);
	cout<<input<<endl;
	return 0;
}
