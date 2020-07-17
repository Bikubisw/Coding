#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode<int>* left;
		BinaryTreeNode<int>* right;
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
void printLevelWise(BinaryTreeNode<int> *root) {
 queue<BinaryTreeNode<int>*> pendingnodes;
 pendingnodes.push(root);
 while(!pendingnodes.empty()){
 BinaryTreeNode<int>* front=pendingnodes.front();
 	pendingnodes.pop();
	cout<<front->data<<":";
	if(front->left){
		cout<<"L"<<":"<<front->left->data<<",";
		pendingnodes.push(front->left);
	}
	else{
		cout<<"L"<<":"<<-1<<",";
	}
	if(front->right){
	cout<<"R"<<":"<<front->right->data;
	pendingnodes.push(front->right);	
	}
	else{
		cout<<"R"<<":"<<-1;
	}
	cout<<endl;
 }
}
int main(){
	
BinaryTreeNode<int>* root = takeInput();
    printLevelWise(root);	
	
}
