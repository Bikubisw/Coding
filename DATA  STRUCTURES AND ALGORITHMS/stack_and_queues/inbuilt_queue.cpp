#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<char> q;
	q.push('a');
	q.push('b');
	q.push('c');
	q.push('d');
	q.push('e');
	q.push('f');
	q.pop();
	q.pop();
	cout<<q.size()<<endl;
	cout<<q.empty()<<endl;
}
