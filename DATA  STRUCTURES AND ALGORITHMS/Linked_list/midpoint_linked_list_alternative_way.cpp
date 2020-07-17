//Find midpoint of a Linked List
#include <iostream>
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
using namespace std;
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL)                  {
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
int length(node * head){
	node*temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
node* midpoint_linkedlist(node *head)
{
	node* first=head;
	node* second=head->next;
	int len=length(head);
	if(len%2==0){
		while(second->next!=NULL){
			first=first->next;
			second=second->next->next;
		}
		return first;
	}
	else{
		while(second!=NULL){
			first=first->next;
			second=second->next->next;
		}
		return first;
		
	}
}

void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node*head=takeinput();
    node* mid=midpoint_linkedlist(head);
    cout<<mid->data;
    return 0;
}

