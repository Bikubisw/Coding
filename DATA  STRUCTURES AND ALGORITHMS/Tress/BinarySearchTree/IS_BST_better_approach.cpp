#include <iostream>
#include <queue>
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
    ~BinaryTreeNode() {
    	if(left) 
       		delete left;
    	if(right) 
       		delete right;
    }
};
using namespace std;
class ISBST{
	public:
		bool isbst;
		int maximum;
		int minimum;
};
 ISBST isBST(BinaryTreeNode<int>* root){
		if(root==NULL){
			ISBST output;
			output.isbst=true;
			output.maximum=INT_MIN;
			output.minimum=INT_MAX;
			return output;
		}
		ISBST leftoutput=isBST(root->left);
		ISBST rightoutput=isBST(root->right);
		int maximum=max(root->data,max(leftoutput.maximum,rightoutput.maximum));
		int minimum=min(root->data,min(leftoutput.minimum,rightoutput.minimum));
		bool isBSTFINAL=(root->data>leftoutput.maximum)&&(root->data<=rightoutput.minimum)&&(leftoutput.isbst&&rightoutput.isbst);
		ISBST output;
		output.minimum=minimum;
		output.maximum=maximum;
		output.isbst=isBSTFINAL;
		return output;
}
BinaryTreeNode<int>* takeInput() {
    int rootData;
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
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
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
    ISBST ans=isBST(root);
    if(ans.isbst)
     {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    delete root;
}

