#include <iostream>
#include <string>
using namespace std;
string getstring(int d)

{
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

void printKeypad(int num,string output){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */if(num==0)
    {
      cout<<output<<endl;
      return ;
    }
  int lastdigit=num%10;
  int smallnum=num/10;
  	string options=getstring(lastdigit);
  for(int i=0;i<options.length();i++){
  
  printKeypad(smallnum,options[i]+output);
  	
}
}
int main()
{
	int num;
	cin>>num;
	string output="";
	printKeypad(num,output);
	
	
}
