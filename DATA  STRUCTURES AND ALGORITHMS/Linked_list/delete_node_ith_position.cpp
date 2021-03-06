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
Node* deleteNode(Node* head,int i){
	Node*temp=head;
	 if(i==0){
	 	Node *a=head;
	 	head=a->next;
	 	delete a;
	 	return head;
	 }
	 for(int j=0;j<i-1;j++){
	 	temp=temp->next;
	 }
	 Node*temp2=temp->next;
	 if(temp2==NULL){
	 	return head;
	 }
	 temp->next=temp2->next;
	 delete (temp2);
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
    int pos;
    cin >> pos;
    head = deleteNode(head, pos);
    print(head);
    return 0;
}


