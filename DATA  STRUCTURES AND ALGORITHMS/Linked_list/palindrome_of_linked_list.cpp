//Check if a linked list is a palindrome
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
node* reverse(node*head){
		node* current = head; 
        node *prev = NULL, *next = NULL; 
  		while (current != NULL) { 
            next = current->next;
            current->next = prev; 
            prev = current; 
            current = next; 
        } 
        return prev;
}
bool check_palindrome(node* head)
{
	node *slow=head;
	node* fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	node*h3=slow->next;
	slow->next=NULL;
	node*h4=reverse(h3);
	while(h4!=NULL&&head!=NULL){
		if(h4->data!=head->data){
			return false;
		}
		h4=h4->next;
		head=head->next;
	}
	return true;
	
	
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
    node*head=takeinput();
    bool ans=check_palindrome(head);
    if(ans)
        cout<<"true";
    else 
        cout << "false";
    return 0;
}

