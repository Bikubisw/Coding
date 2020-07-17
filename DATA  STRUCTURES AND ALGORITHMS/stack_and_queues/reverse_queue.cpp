#include <iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue<int>& q){
	stack<int> s;
	while(!q.empty()){
		s.push(q.front());
		q.pop();		
			}
		while(!s.empty()){
			q.push(s.top());
			s.pop();
		}
}
int main() {
    queue<int> q;
    int size;
    cin >> size;

    int val;
    for(int i = 0; i < size; i++) {
    	cin >> val;
    	q.push(val);
    }
    reverseQueue(q);
    while(!q.empty()) {
    	cout << q.front() << " ";
    	q.pop();
    }
}

