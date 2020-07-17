#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;//static
	for(int i=0;i<99;i++){
		cout<<"Capacity is: "<<v.capacity()<<endl;
		cout<<"Size is: "<<v.size()<<endl;
		v.push_back(i+1);
	}
	//vector<int>* v=new vector<int>();
/*	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v[2]=526;
	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	cout<<v[2]<<endl;
	cout<<v[3]<<endl;
	cout<<v[4]<<endl;
	cout<<v[5]<<endl;
	cout<<v.size()<<endl;
	cout<<v.at(2)<<endl;
	cout<<v.at(5)<<endl;*/
	return 0;
}
