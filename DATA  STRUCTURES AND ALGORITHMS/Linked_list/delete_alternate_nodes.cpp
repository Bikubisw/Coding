#include <iostream>
class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node() {
        if(next) {
            delete next;
        }
    }
};
using namespace std;
void delete_alternate_node_LinkedList(Node *head) {
	if(head==NULL|| head->next==NULL){
		return;
	}
	Node* prev=head;
	Node* next=NULL;
	while(prev!=NULL&&prev->next!=NULL){
		Node*next=prev->next;
		prev->next=prev->next->next;
		next->next=NULL;
		delete (next);
		prev=prev->next;
	}
}
Node* takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
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
    cout << endl;
}

int main() {
    Node *head = takeinput();
    delete_alternate_node_LinkedList(head);
    print(head);
    delete head;
    return 0;
}
