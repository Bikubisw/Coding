#include<bits/stdc++.h>
using namespace std;
void replacepi(char input[]){
	if(input[0]=='\0'){
		return ;
	}
	replacepi(input+1);
	if(input[0]=='x'){
		for(int i=1;i<=strlen(input);i++){
			input[i-1]=input[i];
		}
	
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char s[1000];
	cin.getline(s,1000);
	replacepi(s);
	cout<<s<<endl;
	
}
