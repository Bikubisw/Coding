#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int data){
		this->data=data;
		next=NULL;
		}
		
};
Node* take_input(){
	int data;
	cin>>data;
	Node* head=NULL;
	Node*tail=NULL;
	while(data!=-1){
		Node* newnode= new Node(data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
			}
		else{
			tail->next=newnode;
			tail=tail->next;
			// or tail=newnode;
		}
		cin>>data;
	}
	return head;
}
void print(Node *head){
	Node *temp=head;
	cout<<"The linked list will be: "<<endl;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	Node* head=take_input();
	print(head);
	
	return 0;
}
