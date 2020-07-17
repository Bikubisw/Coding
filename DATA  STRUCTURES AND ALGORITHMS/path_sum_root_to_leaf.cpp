#include <iostream>
#include <queue>
#include<string>
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
void printVector(const vector<int>& v, int i) 
{ 
    for (int j=i; j<v.size(); j++) 
        cout << v[j] << " "; 
    cout << endl; 
} 
void printKPathUtil(BinaryTreeNode<int>*root, vector<int>& path,int k) 
{ 
    // empty node 
    if (!root) 
        return; 
  
    // add current node to the path 
    path.push_back(root->data);
    printKPathUtil(root->left, path, k);  
    printKPathUtil(root->right, path, k); 
    int f = 0; 
    for (int j=path.size()-1; j>=0; j--) 
    { 
        f += path[j]; 
  
        // If path sum is k, print the path 
        if (f == k) 
            printVector(path, j); 
    } 
  
    // Remove the current element from the path 
    path.pop_back(); 
} 
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
 	vector<int> path; 
    printKPathUtil(root, path, k);
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
    int k;
    cin >> k;
    rootToLeafPathsSumToK(root, k);
    delete root;
}

