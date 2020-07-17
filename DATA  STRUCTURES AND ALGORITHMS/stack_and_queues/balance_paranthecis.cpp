#include<iostream>
#include<stack>
using namespace std;
bool checkBalanced(char*input){
	stack<char> s;
	for(int i=0;input[i]!='\0';i++){
		if(input[i]=='('||input[i]=='{'||input[i]=='['){
			s.push(input[i]);
		}
		else if(input[i]==')'){
			if(s.top()=='('){
				s.pop();
			}
			else{
				return false;
			}
		}
			else if(input[i]=='}'){
				if(s.top()=='{'){
					s.pop();
				}
				else{
					return false;
				}
			}
			else if(input[i]==']'){
				if(s.top()=='['){
					s.pop();
				}
				else{
					return false;
				}
			}
				
}
	if(s.empty()){
		return true;
	}
	return false;
}
int main(){
	char input[1000];
	cin.getline(input,1000);
	if(checkBalanced(input)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}
