#include<bits/stdc++.h>
using namespace std;
int sub_seq(string input,string output[]){
	if(input.empty())
	{
		output[0]=" ";
		return 1;
	}
	string small=input.substr(1);
	int smallans=sub_seq(small,output);
	for(int i=0;i<smallans;i++){
		output[i+smallans]=input[0]+output[i];
	}
	return 2*smallans;
	}
int main(){
	string s;
	cin>>s;
	string *output=new string[INT_MAX];
	int ans=sub_seq(s,output);
	for(int i=0;i<ans;i++){
		cout<<output[i]<<endl;
	
	}
	
	return 0;
}
