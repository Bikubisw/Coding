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
	Node* newnode=new Node(data);
	int count=0;
	Node*temp=head;
	if(i==0){
		newnode->next=head;
		head=newnode;
		return head;
	}
	while(temp!=NULL&& count<i-1){
		temp=temp->next;
		count++;
	}
	if(temp!=NULL){
	newnode->next=temp->next;
	temp->next=newnode;
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
	Node*head=take_input();
	int i,data;
	cin>>i>>data;
	head=insert_node(head,i,data);
	print(head);
	return 0;
}
