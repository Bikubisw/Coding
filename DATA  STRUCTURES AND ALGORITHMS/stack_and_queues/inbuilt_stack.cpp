#include<iostream>
using namespace std;
#include<stack>
int main(){
	 stack<int> s;
	 int size;
	 cin>>size;
	 int val;
	 for(int i=0;i<size;i++){
	 	cin>>val;
	 	s.push(val);
	 }
	 cout<<s.top()<<endl;
	 s.pop();
	 s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl; 
	cout<<s.size()<<endl;
	cout<<s.empty()<<endl;
	return 0;
}
