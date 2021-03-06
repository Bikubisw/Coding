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
node* skipMdeleteN(node  *head, int M, int N) {
	if(M==0 || N==0){
		return head;
	}
	node* curr=head;
	node* t=NULL;
	int count;
	while(curr!=NULL){
	for(count=1;count<M&&curr!=NULL;count++){
		curr=curr->next;
	}
	t=curr->next;
	for(count=1;count<=N&&t!=NULL;count++){
		node* temp=t;
		t=t->next;
		delete temp;
	}
	curr->next=t;
	curr=t;	
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
    int m,n;
    cin>>m >> n;
    head= skipMdeleteN(head,m,n);
    print(head);
    return 0;
}

