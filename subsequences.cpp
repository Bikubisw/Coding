#include<iostream>
using namespace std;
int subsequences(string input,string output[])
{
	if(input.empty())
	{
	output[0]="";
	return 1;
		
	}
	string smallstring=input.substr(1);
	int smallinputsize=subsequences(smallstring,output);
	for(int i=0;i<smallinputsize;i++)
	{
		output[i+smallinputsize]=input[0]+output[i];
	}
	return 2*smallinputsize;
	}
int main()
{
string input;
cin>>input;
string*output=new string[1000];
int count=subsequences(input,output);
for(int i=0;i<count;i++){
	cout<<output[i]<<endl;
}
	
	
	
	return 0;
}
