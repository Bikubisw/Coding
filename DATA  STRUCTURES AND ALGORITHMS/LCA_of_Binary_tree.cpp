#include<iostream>
#include<queue>
using namespace std;
template<typename T>
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
		if(left){
			delete left;
		}
		if(right){
			delete right;
		}
	}
};
int lcaBinaryTree(BinaryTreeNode<int>*root,int a,int b){
	if(root==NULL){
		return -1;
	}
	if(root->data==a||root->data==b){
		return root->data;
	}
	int ans1=lcaBinaryTree(root->left,a,b);
	int ans2=lcaBinaryTree(root->right,a,b);
	if(ans1==-1&&ans2==-1){
		return -1;
	}
	if(ans1!=-1&&ans2==-1){
		return ans1;
	}
	if(ans2!=-1&&ans1==-1){
		return ans2;
	}
	if(ans1!=-1&&ans2!=-1){
		return root->data;
	}
	
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
	  BinaryTreeNode<int>* root = takeInput();
    int a, b;
    cin >> a >> b;
    cout << lcaBinaryTree(root, a, b);
    delete root;
}
