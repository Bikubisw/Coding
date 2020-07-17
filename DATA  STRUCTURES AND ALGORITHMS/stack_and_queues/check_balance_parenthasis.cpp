#include <iostream>
#include<cstring>
#include<stack>
using namespace std;
int countBracketReversals(char*input){
	stack<int> s;
	if(strlen(input)%2!=0){
		return -1;
	}
	else{
		for(int i=0;i<strlen(input);i++){
			if(input[i]=='{'){
				s.push(input[i]);
				}
			else{
				if(s.empty()){
					s.push(input[i]);
				}
				else if(!s.empty()&&s.top()=='{'){
					s.pop();
				}
				else if(!s.empty()&&s.top()!='{'){
					s.push(input[i]);
				}
			}
		}
	}
	int count=0;
	while(!s.empty()){
		char c1=s.top();
		s.pop();
		char c2=s.top();
		if(c1==c2){
			count++;
		}
		else{
			count=count+2;
		}
		s.pop();
	}
	return count;
	
}
int main() {
    char input[10000];
    cin.getline(input,10000);
    cout<<countBracketReversals(input)<<endl;
}
