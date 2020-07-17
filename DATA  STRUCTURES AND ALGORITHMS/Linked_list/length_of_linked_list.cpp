#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			next=NULL;
		} 
};
Node* takeinput(){
	int data;
	cin>>data;
	Node* head=NULL;
	Node* tail=NULL;
	while(data!=-1){
	Node* newnode=new Node(data);
	if(head==NULL){
	head=newnode;
	tail=newnode;	
	}	
	else{
		tail->next=newnode;
		tail=newnode;
	}
	cin>>data;
	}
	return head;
	
}
int length(Node* head){
	Node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}	
	return count;
}
void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

int main(){
	Node*head=takeinput();
	int ans=length(head);
	cout<<ans<<endl;
	return 0;
}
