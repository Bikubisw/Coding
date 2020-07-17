
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
node* mergeTwoLLs(node *head1, node *head2) {
	node* fhead=NULL;
	node* ftail=NULL;
	if(head1->data<head2->data){
		fhead=head1;
		ftail=head1;
		head1=head1->next;
	}
	else{
		fhead=head2;
		ftail=head2;
		head2=head2->next;
	}
	while(head1!=NULL&&head2!=NULL){
		if(head1->data<head2->data){
			ftail->next=head1;
			ftail=head1;
			head1=head1->next;
			}
		else{
			ftail->next=head2;
			ftail=head2;
			head2=head2->next;
		}
		
	}   
	if(head1!=NULL){
		ftail->next=head1;
	}
	if(head2!=NULL){
		ftail->next=head2;	
	}
	return fhead;
}
node* mergeSorthelper(node *head){
	if(head==NULL&&head->next==NULL){
		return head;
	}
	node* slow=head;
	node *fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	node* h3=slow->next;
	slow->next=NULL;
	node*h4=mergeSorthelper(head);
	node*h5=mergeSorthelper(h3);
	node*h6=mergeTwoLLs(h5,h6);
	return h6;
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
int main()
{
    node* head=takeinput();
    head= mergeSorthelper(head);
    print(head);
    return 0;
}


