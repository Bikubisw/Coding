#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
int main(){
	unordered_map<string,int> ourmap;
	ourmap["abc"]=5;
	ourmap["abc1"]=4;
	ourmap["abc2"]=3;
	ourmap["abc3"]=2;
	ourmap["abc4"]=1;
	ourmap["abc5"]=9;
	ourmap["abc6"]=2;
	ourmap["abc7"]=0;
	unordered_map<string,int>::iterator it2=ourmap.find("abc");
	ourmap.erase(it2);
	unordered_map<string,int>::iterator it=ourmap.begin();
	while(it!=ourmap.end()){
		cout<<"Key is:"<<it->first<<" "<<"value is"<<it->second<<endl;
		it++;
	}
	
	vector<int> v;
	v.push_back(19);
	v.push_back(9);
	v.push_back(29);
	v.push_back(69);
	v.push_back(19);
	v.push_back(169);
	v.push_back(19);
	vector<int>:: iterator it1=v.begin();
	while(it1!=v.end()){
		cout<<*it1<<endl;
		it1++;
	}


	
}
