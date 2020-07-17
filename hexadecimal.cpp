#include<bits/stdc++.h>
using namespace std;
int value(string s1);
int main(){
    string s;
    cin>>s;
    int sum=0;
    int j;
	for(int i=s.length-1,j=0;i>=0,j<s.length()-1;i--,j++){
		int b=value(s[i]);
		sum=sum+(b*pow(16,J));
		}
	cout<<sum<<endl;
	return 0;
}
int value(string s1){
	if (s1=='0'){
		return 0;}
		if(s1=='1')
		{
			return 1;
		}
			if(s1=='2')
		{
			return 2;
		}
			if(s1=='3')
		{
			return 3;
		}
			if(s1=='4')
		{
			return 4;
		}
			if(s1=='5')
		{
			return 5;
		}
			if(s1=='6')
		{
			return 6;
		}
			if(s1=='7')
		{
			return 7;
		}
			if(s1=='8')
		{
			return 8;
		}
			if(s1=='9')
		{
			return 9;
		}
			if(s1=='A')
		{
			return 10;
		}
			if(s1=='B')
		{
			return 11;
		}
			if(s1=='C')
		{
			return 12;
		}
			if(s1=='D')
		{
			return 13;
		}
			if(s1=='E')
		{
			return 14;
		}
		if(s1=='F'){
			return 15;
		}
		
}
