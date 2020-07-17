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
Node* mergeTwoLLs(Node *head1, Node *head2) {
	Node* fhead=NULL;
	Node* ftail=NULL;
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

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head1 = takeinput();
    Node *head2 = takeinput();
    Node *head3 = mergeTwoLLs(head1, head2);
    print(head3);
    return 0;
}


