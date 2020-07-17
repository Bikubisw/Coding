#include<iostream>
using namespace std;
int main(){
	char c;
	c=cin.get();
	int count1=0;
	int count2=0;
	int count3=0;
	while(c!='$')
	{ 
	  if(c>='0'&&c<='9'){
	  	count2++;
	  }
	 else if(c>='a'&&c<='z'){
	  	count1++;
	  }
	  else if(c==' '||c=='\t'||c=='\n'){
	  	  	count3++;
}
c=cin.get();
}

	cout<<count1<<" "<<count2<<" "<<count3<<endl;
	
return 0;
}
