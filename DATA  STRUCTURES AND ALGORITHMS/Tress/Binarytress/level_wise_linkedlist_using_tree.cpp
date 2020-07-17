#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class node{
	public:
		T data;
		node<T>* next;
		node(T data){
			this->data=data;
			this->next=NULL;
		}
};
template <typename T>
class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode<T>* left;
		BinaryTreeNode<T>* right;
		BinaryTreeNode(T data){
			this->data=data;
			left=NULL;
			right=NULL;
		}
		~BinaryTreeNode(){
			delete left;
			delete right;
		}
};
vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int>* root){
	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	pendingnodes.push(NULL);
	node<int>* head=NULL;
	node<int>* tail=NULL;
	vector<node<int>*> output;
	while(!pendingnodes.empty()){
		BinaryTreeNode<int>* front=pendingnodes.front();
		pendingnodes.pop();
		if(front==NULL){
			output.push_back(head);
			if(pendingnodes.empty()){
				break;
			}
			pendingnodes.push(NULL);
			head=NULL;
			tail=NULL;
			continue;
		}
		node<int>* newnode=new node<int>(front->data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
			
		}
		else{
			tail->next=newnode;
			tail=tail->next;
		}
		if(front->left!=NULL){
		pendingnodes.push(front->left);
	}
	if(front->right!=NULL){
		pendingnodes.push(front->right);
	}
}
	return output; 
}
BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
  		q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    
    return root;
}
void print(node<int>* root){
	node<int>* temp=root;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	BinaryTreeNode<int>* root=takeInput();
	vector<node<int>*> ans=createLLForEachLevel(root);
	for(int i=0;i<ans.size();i++){
		print(ans[i]);
	}
	
	delete root;
	
	return 0;
}
