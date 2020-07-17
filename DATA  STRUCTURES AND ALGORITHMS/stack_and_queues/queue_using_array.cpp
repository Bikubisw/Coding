#include<iostream>
using namespace std;
template <typename T>
class Queue{
	T* data;
	int nextindex;
	int firstindex;
	int size;
	int capasity;
	public:
		Queue(int s){
		data=new T[s];
		nextindex=0;
		firstindex=-1;
		size=0;
		capasity=s;
		}
		int getsize(){
			return size;
		}
		bool isEmpty(){
			return size==0;
		}
		//insert element
		void enqueue(T element){
			if(size==capasity){
				cout<<"queue is full"<<endl;
				return;
			}
			data[nextindex]=element;
			nextindex=(nextindex+1)%capasity;
			if(firstindex==-1){
				firstindex=0;
			}
			size++;
		}
		T front(){
			if(firstindex==-1){
				cout<<"queue is empty"<<endl;
				return 0;
			}
			return data[firstindex];
		}
		int dequeue(){
			if(isEmpty()){
			cout<<"queue is empty"<<endl;
				return 0;
			}
			T ans=data[firstindex];
			firstindex=(firstindex+1)%capasity;
			size--;
			if (size==0){
				firstindex=-1;
				nextindex=0;
			}
			return ans;
		}
};
int main(){
	int size;
	cin>>size;
	Queue <int>s(size);
	s.enqueue(10);
	s.enqueue(20);
	s.enqueue(30);
	s.enqueue(40);
	s.enqueue(50);
	s.enqueue(60);
	s.dequeue();
	s.dequeue();
	cout<<s.front()<<endl;
	cout<<s.getsize()<<endl;
	
	return 0;
}
