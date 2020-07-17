#include<iostream>
#include<climits>
using namespace std;
class stack{
	int *data;
	int nextindex;
	int capasity;
	public:
		stack(int totalsize){
			data=new int[totalsize];
			nextindex=0;
			capasity=totalsize;
		}
		//return the number of elements present in my stack
		int size(){
			return nextindex;
		}
		bool is_empty(){
		/*	if(nextindex==0){
				return true;
			}
			else{
				return false;
			}*/
			return nextindex==0;
		}
		// insert element in stack
		void push(int element){
			if(capasity==nextindex){
				cout<<"Stack is full"<<endl;
				return ;
			}
			data[nextindex]=element;
			nextindex++;
		}
		//delete element in stack
		int pop(){
			if(is_empty()){
				cout<<"Stack is empty"<<endl;
				return INT_MIN;
			}
			nextindex--;
			return data[nextindex];
		}
		int top(){
			if(is_empty()){
				cout<<"stack is empty"<<endl;
				return INT_MIN;
			}
			return data[nextindex-1];
			
		}
		
};


int main(){
	int size;
	cin>>size;
	stack s(size);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.is_empty()<<endl;
	
	
	return 0;
}
