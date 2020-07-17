#include<iostream>
class Node{
	public:
		int data;
		Node* next;
		Node(int data){
		this->data=data;
		this->next=NULL;
		}
	
};
using namespace std;
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
int indexOfNIter(Node *head, int n) {
 Node* temp=head;
 int count=0;
 while(temp!=NULL){
 	if(temp->data!=n){
 		count++;
 		temp=temp->next;
	 }
	 else{
	 	return count;
	 }
 }
 return -1; 
    
    
}

void print(Node* head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	Node *head=takeinput();
	int n;
	cin>>n;
	int ans=indexOfNIter(head,n);
	cout<<ans<<endl;
	
	return 0;
}
