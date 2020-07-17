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
node* midpoint(node* head){
	node* slow=head;
	node* fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
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
node* mergeSort(node *head) {
	if(head==NULL|| head->next==NULL){
		return head;
	}
	node*mid=midpoint(head);
	node* half1=head;
	node* half2=mid->next;
	mid->next=NULL;
	half1=mergeSort(half1);
	half2=mergeSort(half2);
	node* fhead=mergeTwoLLs(half1,half2);
	return fhead;
}
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
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
    head= mergeSort(head);
    print(head);
    return 0;
}

