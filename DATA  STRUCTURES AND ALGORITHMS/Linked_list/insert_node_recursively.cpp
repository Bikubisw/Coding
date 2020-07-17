#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int data){
		this->data=data;
		this->next=NULL;
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
Node* insert_node(Node* head,int i,int data){
	if(head==NULL){
		if(i==0){
			Node* newnode=new Node(data);
			return newnode;
			
		}else{
		
		return head;}
	}
	if(i==0){
		Node* newnode=new Node(data);
		newnode->next=head;
		head=newnode;
		return head;
	}
	head->next=insert_node(head->next,i-1,data);
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
	Node*head=take_input();
	int i,data;
	cin>>i>>data;
	head=insert_node(head,i,data);
	print(head);
	return 0;
}
