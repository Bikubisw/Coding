#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
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

void print_ith_node(Node* head,int i){
Node* temp=head;
int count=0;
while(temp!=NULL){
	if(count==i){
		cout<<temp->data<<endl;
		return ;
	}
	count++;
	temp=temp->next;
	
}
}
void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
	Node* head=takeinput();
	int pos;
	cin>>pos;
	print_ith_node(head,pos);
}
