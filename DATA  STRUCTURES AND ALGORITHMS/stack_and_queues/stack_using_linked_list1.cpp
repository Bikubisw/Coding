#include<iostream>
using namespace std;
template<typename T>
class Node{
	T data;
	Node<T> *next;
	Node(int data){
		this->data=data;
		next=NULL;
}
};
template<typename T>
class Stack{
	Node<T>* head;
	int size;
	Stack(){
		head=NULL;
		size=0;
	}
	int getsize(){
		return size;
	}
	bool is_empty(){
		return size==0;
	}
	void push(T element){
		Node<T>* newnode=new Node<T>(element);
		if(head==NULL){
			head=newnode;
			size++;
		}
		newnode->next=head;
		head=newnode;
		size++;
	}
	T pop(){
		if(is_empty()){
			return 0;
		}
		T ans=head->data;
		Node<T>* h1=head;
		head=head->next;
		delete h1;
		size--;
		return ans;
	}
	T top(){
		if(is_empty()){
			return 0;
		}
		return head->data;
	}
	
};
int main(){
		
}
