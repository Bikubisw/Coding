#include<iostream>
#include<unordered_map>
#include<string>
#include<utility>
using namespace std;
int main(){
	unordered_map<string,int> ourmap;
	pair<string,int> p("abc",1);
	ourmap.insert(p);
	ourmap["adyasyd"]=2;
	cout<<ourmap["abc"]<<endl;
	cout<<ourmap["adyasyd"]<<endl;
	cout<<ourmap.at("abc")<<endl;
	cout<<ourmap["gddyqwf"]<<endl;
	//cout<<ourmap.at("sfde")<<endl;
	if(ourmap.count("abfc")>0){
		cout<<"abc is present"<<endl;
	}
	cout<<ourmap.find("abc")<<endl;
}
