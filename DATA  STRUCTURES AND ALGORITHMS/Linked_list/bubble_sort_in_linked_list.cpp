#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int data){
		this->data=data;
		this->next=NULL;
	}
	
};
node* takeinput(){
	int data;
	cin>>data;
	node*head=NULL;
	node*tail=NULL;
	while(data!=-1){
		node* newnode=new node(data);
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
int length(node*head){
	node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;

	}
	return count;
}
node* bubble_sort(node*head){
	int len=length(head);
	for(int i=0;i<len;i++){
		node*curr=head;
		node*prev=NULL;
		node*next=NULL;
		while(curr->next!=NULL){
			if(curr->data<curr->next->data){
				prev=curr;
				curr=curr->next;
				}
				else{
					
				if(prev!=NULL){
				next=curr->next;
				prev->next=curr->next;
				curr->next=next->next;
				next->next=curr;
				prev=prev->next;		
			}
			else{
				next=curr->next;
				curr->next=next->next;
				next->next=curr;
				prev=next;
				head=prev;
		}
	}
			
			
		}
	}
	return head;
	
}
void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	
    node* head=takeinput();
    head=bubble_sort(head);
    print(head);
	return 0;
}
