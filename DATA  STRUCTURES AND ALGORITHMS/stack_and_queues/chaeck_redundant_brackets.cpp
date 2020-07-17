#include<iostream>
#include<stack>
using namespace std;
bool checkRedundantBrackets(char* input){
	stack<char> s;
	bool flag=false;
	for(int i=0;input[i]!='\0';i++){
		if(input[i]!=')'){
			s.push(input[i]);
		}
		else{
			while(s.top()!='('){
				s.pop();
				flag=true;
				if(s.empty()){
					break;
				}
				
			}
			if(s.empty()){
				continue;
			}
			if(flag){
				s.pop();
				flag=false;
			}
			else{
				return true;
			}
			
			
		}
		
	}
	return false;
}
int main()
{
	char input[1000];
	cin.getline(input,1000);
	if(checkRedundantBrackets(input)) {
	    cout << "true" << endl;
    }
    else {
	    cout << "false" << endl;
    }
	return 0;
}
