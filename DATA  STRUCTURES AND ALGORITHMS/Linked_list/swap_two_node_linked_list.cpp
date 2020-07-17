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
node* swap_nodes(node* head,int i,int j){
	if((i==0&&j==1)||(i==1&&j==0)){
		
		node* prev=head;
		node* curr=prev->next;
		prev->next=curr->next;
		curr->next=prev;
		head=curr;
		return head;	
	}
	
	if((i==0||j==0)&&(i!=1||j!=1)){
		
		node* c1=head;
		node *prev=head;
		node* p2=c1->next;
		int count1=1;
		int count2=1;
		while(count1<j||count2<i){
			count1++;
			count2++;
			prev=prev->next;
		}
		
		node* c2=prev->next;
		prev->next=c1;
		c1->next=c2->next;
		c2->next=p2;
		head=c2;
		return c2;
	}
	if(((i-j)==-1||(i-j)==1)&&(i!=0||j!=0)){
		
		node *prev=head;
		int count1=1;
		int count2=1;
		while(count1<i && count2<j){
			count1++;
			count2++;
			prev=prev->next;
		}
		node* c1=prev->next;
		node* c2=c1->next;
		prev->next=c2;
		c1->next=c2->next;
		c2->next=c1;
		return head;
		
		
	}
	
	else{
		
		node* p1=head;
		node*p2=head;
		int count1=1;
		while(count1<i){
			count1++;
			p1=p1->next;
		}
		node* c1=p1->next;
		int count2=1;
		while(count2<j){
			count2++;
			p2=p2->next;
		}
		node* c2=p2->next;
		p1->next=c2;
		p2->next=c1;
		c1->next=c2->next;
		c2->next=p2;
		return head;
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

int main()
{
    int i,j;
    node* head =takeinput();
    cin>>i;
    cin>>j;
    head=swap_nodes(head,i,j);
    print(head);
    return 0;
}

