#include <iostream>
#include <queue>
using namespace std;
#include<cmath>
template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
#include<climits>
class pairbal{
	public:
		bool isbalanced;
		int height;
};
pairbal isBalancedHelper(BinaryTreeNode<int>* root){
	if(root==NULL){
		pairbal p;
		p.isbalanced=true;
		p.height=0;
		return p;
	}
	pairbal lans=isBalancedHelper(root->left);
	pairbal rans=isBalancedHelper(root->right);
	int lh=lans.height;
	int rh=rans.height;
	bool lbal=lans.isbalanced;
	bool rbal=rans.isbalanced;
	int height=1+max(lh,rh);
	bool is_balanced;
	if(lh-rh>1){
		is_balanced=false;
	}
	else{
		is_balanced=(lbal&&rbal);
	}
	pairbal finalans;
	finalans.height=height;
	finalans.isbalanced=is_balanced;
	return finalans;
}
bool isBalanced(BinaryTreeNode<int>* root){
	pairbal ans=isBalancedHelper(root);
	return ans.isbalanced;
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

int main() {
    BinaryTreeNode<int>* root = takeInput();
    if(isBalanced(root))
    	cout << "true" << endl;
    else
	cout << "false" << endl;
}

