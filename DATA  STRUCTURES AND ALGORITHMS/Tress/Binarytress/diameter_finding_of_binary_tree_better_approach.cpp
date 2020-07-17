#include<iostream>
#include<queue>
#include<utility>
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
			delete left;
			delete right;
	}
};
pair<int,int> heightdiameter(BinaryTreeNode<int>* root){
	if(root==NULL){
		pair<int,int> p;
		p.first=0;
		p.second=0;
		return p;
	}
	pair<int,int> leftans=heightdiameter(root->left);
	pair<int,int> rightans=heightdiameter(root->right);
	int ld=leftans.second;
	int lh=leftans.first;
	int rd=rightans.second;
	int rh=rightans.first;
	
	int height=1+max(lh,rh);
	int diameter=max((lh+rh),max(ld,rd));
	pair<int,int> p;
	p.first=height;
	p.second=diameter;
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
	// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
	BinaryTreeNode<int>* root=takeInput();
	pair<int,int> p=heightdiameter(root);
	cout<<p.first<<endl;
	cout<<p.second<<endl;
	delete root;
}
