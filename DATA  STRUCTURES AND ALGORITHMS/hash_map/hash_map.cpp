#include<iostream>
#include"hash_map_implementation.h"
using namespace std;
int main(){
	ourmap<int> mapp;
	for(int i=0;i<10;i++){
		char c='0'+i;
		string key="abc";
		key=key+c;
		int value=i+1;
		mapp.insert(key,value);	
		//cout<<mapp.getloadfactor()<<endl;
	}
	mapp.remove("abc7");
	mapp.remove("abc5");
	for(int i=0;i<10;i++){
		char c='0'+i;
		string key="abc";
		key=key+c;
		cout<<mapp.getvalue(key)<<endl;
	}


	
	cout<<mapp.size()<<endl;
}
