#include<iostream>
#include<queue>
#include<climits>
using namespace std;
template<typename T>
class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode<T> *left;
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
class PairAns{
	public:
		int max;
		int min;
};
PairAns minMax(BinaryTreeNode<int> *root) {
    if(root==NULL){
    	PairAns p;
    	p.max=INT_MIN;
    	p.min=INT_MAX;
    	return p;
	}
	int max=root->data;
	int min=root->data;
	PairAns lvalue=minMax(root->left);
	PairAns rvalue=minMax(root->right);
	if(lvalue.max>max){
		max=lvalue.max;
	}
	if(rvalue.max>max){
		max=rvalue.max;
	}
	if(lvalue.min<min){
		min=lvalue.min;
	}
	if(rvalue.min<min){
		min=rvalue.min;
	}
	PairAns p;
	p.max=max;
	p.min=min;
	return p;
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
int main(){
	BinaryTreeNode<int>* root=takeInput();
	PairAns p=minMax(root);
	cout<<p.max<<" ";
	cout<<p.min; 
	delete root;
}
