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
int length(node* head){
	int count=0;
	node* temp=head;
	while(temp!=NULL){
	 count++;
	 temp=temp->next;	
	}
	return count;
}
node* append_LinkedList(node* head,int n){
	int len=length(head);
	int count=len-n;
	node* temp=head;
	for(int i=1;i<count;i++){
		temp=temp->next;
	}
	node* h2=temp->next;
	temp->next=NULL;
	node *temp2=h2;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp2->next=head;
	return h2;
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
    head=append_LinkedList(head,n);
    print(head);
    return 0;
}

