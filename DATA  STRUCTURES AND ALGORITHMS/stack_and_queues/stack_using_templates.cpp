#include<iostream>
#include<climits>
using namespace std;
template<typename T>
class stack{
	T *data;
	int nextindex;
	int capasity;
	public:
		stack(){
			data=new T[4];
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
		void push(T element){
			if(capasity==nextindex){
				T *newdata= new T[2*capasity];
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
		T pop(){
			
			if(is_empty()){
				cout<<"Stack is empty"<<endl;
				return 0;
			}
			nextindex--;
			return data[nextindex];
		}
		T top(){
			if(is_empty()){
				cout<<"Stack is empty"<<endl;
				return 0;
			}
			return data[nextindex-1];
			
		}
		
};

int main(){
	stack <char> s;
	s.push('d');
	s.push('e');
	
	s.push('e');
	s.push('l');
	
	s.push('q');
	s.push('y');
	
	cout<<s.top()<<endl;

	cout<<s.pop()<<endl;

	cout<<s.pop()<<endl;

	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;

	cout<<s.is_empty()<<endl;
	
	
	return 0;
}
