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
class Pair{
	public:
		node* head;
		node* tail;
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
Pair reverse_linked_list_rec(node *head)
{
	if(head==NULL||head->next==NULL){
	Pair ans;
	ans.head=head;
	ans.tail=head;
	return ans;
	}
	Pair smallans=reverse_linked_list_rec(head->next);
	smallans.tail->next=head;
	head->next=NULL;
	Pair ans;
	ans.head=smallans.head;
	ans.tail=head;
	return ans;
	
}
int length(node* head){
	int count=1;
	node*temp=head;
	while(temp!=NULL){
		count++;
	}
	return count;
	
}


node* kReverse(node*head,int n)
{
	 node* current = head;  
    node* next = NULL;  
    node* prev = NULL;  
    int count = 0;  
      
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < n)  
    {  
        next = current->next;  
        current->next = prev;  
        prev = current;  
        current = next;  
        count++;  
    }  
    
    if (next != NULL)  
    head->next = kReverse(next, n);  
  
    /* prev is new head of the input list */
    return prev;  
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
    int n;
    cin>>n;
    head=kReverse(head,n);
    print(head);
    return 0;
}
