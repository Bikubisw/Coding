#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int data){
		this->data=data;
		next=NULL;
		}
		
};
void print(node *head){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	//dynamically
	node *n1=new node(1);
	node *head=n1;
	node *n2=new node(2);
	node *n3=new node(3);
	node *n4=new node(4);
	node *n5=new node(5);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	print(head);
	/*	n1.next=&n2
	cout<<head->data<<endl;
	// dynamically
	node *n3=new node(52);
	node *head1=n3;
	node *n4=new node(65);
	
	n3->next=n4;*/
	
	return 0;
}
