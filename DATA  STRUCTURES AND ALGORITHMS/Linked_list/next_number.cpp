#include <iostream>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
Node* reverse(Node* head){
	Node*curr=head;
	Node* prev=NULL;
	Node* next=NULL;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}
Node* NextLargeNumber(Node *head) {
	head=reverse(head); 
	Node*curr=head;
	Node* prev=NULL;
	int carry=1;
	int num;
	while(curr!=NULL){
		num=((curr->data)+carry)%10;
		carry=((curr->data)+carry)/10;
		curr->data=num;
		prev=curr;
		curr=curr->next;
	}
	if(carry){
		Node* newnode=new Node(carry);
		prev->next=newnode;
	}
	return reverse(head);
}

using namespace std;
Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}

