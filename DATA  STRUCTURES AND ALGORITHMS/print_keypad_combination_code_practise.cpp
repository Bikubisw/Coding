#include <iostream>
#include <string>
using namespace std;
string getstring(int d){
	if(d==2)
	{return "abc";
	}
		if(d==3)
	{return "def";
	}
		if(d==4)
	{return "ghi";
	}
		if(d==5)
	{return "jkl";
	}
		if(d==6)
	{return "mno";
	}
		if(d==7)
	{return "pqrs";
	}
		if(d==8)
	{return "tuv";
	}
		if(d==9)
	{return "wxyz";
	}
	return "";
}
void printKeypadhelper(int num,string output){
	if(num==0){
		cout<<output<<endl;
		return;
	}
	int lastdigit=num%10;
	int smallnumber=num/10;
	string options=getstring(lastdigit);
	for(int i=0;i<options.length();i++){
		printKeypadhelper(smallnumber,options[i]+output);	
	}
}
void printKeypad(int num){
	string output="";
	printKeypadhelper(num,output);
}
int main(){
    int num;
    cin >> num;
    printKeypad(num);
    return 0;
}

