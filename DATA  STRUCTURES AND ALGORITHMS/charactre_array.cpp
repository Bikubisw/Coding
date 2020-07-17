#include<iostream>
using namespace std;
void reverse(char b[]){
	int count=0;
	for(int i=0;b[i]!='\0';i++){
		count++;
	}
	int i=0,j=count-1;
	while(i<j){
		char temp=b[i];
		b[i]=b[j];
		b[j]=temp;
		i++;
		j--;
	}
}
int main(){
	char b[100];
	cin.getline(b,100);
	reverse(b);
	cout<<b<<endl;
	return 0;
}
