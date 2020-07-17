#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
	priority_queue <int, vector<int>, greater<int> > p;
	p.push(56);
	p.push(16);
	p.push(20);
	p.push(65);
	p.push(50);
	p.push(20);
	cout<<"MAX: "<<p.top()<<endl;
	cout<<"SIZE: "<<p.size()<<endl;
	while(!p.empty()){
		cout<<p.top()<<endl;
		p.pop();
	}

}
