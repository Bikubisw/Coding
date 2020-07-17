#include<iostream>
#include<climits>
using namespace std;
class stack{
	int *data;
	int nextindex;
	int capasity;
	public:
		stack(){
			data=new int[4];
			nextindex=0;
			capasity=4;
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
				int *newdata= new int[2*capasity];
				for(int i=0;i<capasity;i++){
					newdata[i]=data[i];
				}
				capasity=2*capasity;
				delete []data;
				data=newdata;
				
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
				cout<<"Stack is empty"<<endl;
				return INT_MIN;
			}
			return data[nextindex-1];
			
		}
		
};

int main(){
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(95);
	s.push(56);
	s.push(78);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.is_empty()<<endl;
	return 0;
}
