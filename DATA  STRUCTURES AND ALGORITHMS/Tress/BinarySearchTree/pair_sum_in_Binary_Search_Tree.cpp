#include <iostream>
#include <queue>
#include<vector> 
#include<algorithm>
using namespace std;
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
void converttoarray(BinaryTreeNode<int>* root,vector<int> &output){
    if(root==NULL){
        return;
    }
    output.push_back(root->data);
    converttoarray(root->left,output);
    converttoarray(root->right,output);
}
void nodesSumToS(BinaryTreeNode<int> *root, int sum) {
    vector<int> output;
    converttoarray(root,output);
    sort(output.begin(),output.end());
    int i=0;
    int j=output.size()-1;
    while(i<j){
        if(output[i]+output[j]==sum){
            cout<<output[i]<<" "<<output[j]<<endl;
            i++;
            j--;
        }
        else if(output[i]+output[j]>sum){
            j--;
        }
        else{
            i++;
        }
    }
}
using namespace std;
void insertDuplicateNode(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return;
    }
    insertDuplicateNode(root->left);
    insertDuplicateNode(root->right);
    BinaryTreeNode<int>* newnode=new BinaryTreeNode<int>(root->data);
    BinaryTreeNode<int>*temp=root->left;
    root->left=NULL;
    root->left=newnode;
    newnode->left=temp;
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

void printLevelATNewLine(BinaryTreeNode<int> *root) {
	queue<BinaryTreeNode<int>*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()) {
		BinaryTreeNode<int> *first = q.front();
		q.pop();
		if(first == NULL) {
			if(q.empty()) {
				break;
			}
			cout << endl;
			q.push(NULL);
			continue;
		}
		cout << first -> data << " ";
		if(first -> left != NULL) {
			q.push(first -> left);
		}
		if(first -> right != NULL) {
			q.push(first -> right);
		}
	}
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    insertDuplicateNode(root);
    //printLevelATNewLine(root);
    delete root;
}

