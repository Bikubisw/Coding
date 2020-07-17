#include<iostream>
#include<queue>
#include<climits>
using namespace std;
template<typename T>
class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode<T>* left;
		BinaryTreeNode<T>* right;
		BinaryTreeNode(int data){
			this->data=data;
			left=NULL;
			right=NULL;
		}
		~ BinaryTreeNode(){
			delete left;
			delete right;
		}
};
BinaryTreeNode<int>* takeinput(){
	int rootdata;
	cout<<"Enter root data: "<<endl;
	cin>>rootdata;
	queue<BinaryTreeNode<int>*> pendingnodes;
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootdata);
	pendingnodes.push(root);
	while(!pendingnodes.empty()){
		BinaryTreeNode<int>* front=pendingnodes.front();
		pendingnodes.pop();
		int leftchilddata;
		cout<<"Enter the leftchilddata of"<<front->data<<endl;
		cin>>leftchilddata;
		if(leftchilddata!=-1){
			BinaryTreeNode<int>* leftchild=new BinaryTreeNode<int>(leftchilddata);
			front->left=leftchild;
			pendingnodes.push(leftchild);
		}
	   int rightchilddata;
		cout<<"Enter the rightchilddata of"<<front->data<<endl;
		cin>>rightchilddata;
		if(rightchilddata!=-1){
			BinaryTreeNode<int>* rightchild=new BinaryTreeNode<int>(rightchilddata);
			front->right=rightchild;
			pendingnodes.push(rightchild);
		}
	}
   return root;
}
int countnodes(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	return 1+countnodes(root->left)+countnodes(root->right);
}
bool isNodePresent(BinaryTreeNode<int>* root,int x){
	if(root==NULL){
		return false;
	}
	if(root->data==x){
		return true;
	}
	bool ans1=isNodePresent(root->left,x);
	bool ans2=isNodePresent(root->right,x);
	return ans1||ans2;
}
int height(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}
void printTreeLevelwise(BinaryTreeNode<int>* root){

	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(!pendingnodes.empty()){
		BinaryTreeNode<int>* front=pendingnodes.front();
		pendingnodes.pop();
		cout<<front->data<<":";
		if(front->left!=NULL){
			cout<<"L"<<front->left->data<<",";
			pendingnodes.push(front->left);
		}
		else{
			cout<<"L"<<-1<<",";
		}
		 if(front->right!=NULL){
			cout<<"R"<<front->right->data<<",";
			pendingnodes.push(front->right);
		}
		else{
			cout<<"R"<<-1<<",";
		}
		cout<<endl;
	}
}
void printTree(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	if(root->left!=NULL){
		cout<<"L"<<root->left->data<<",";
	}
	if(root->right!=NULL){
		cout<<"R"<<root->right->data<<",";
	}
	cout<<endl;
	printTree(root->left);
	printTree(root->right);
}
int main(){

	BinaryTreeNode<int>* root=takeinput();
	// printTreeLevelwise(root);
	//cout<<countnodes(root)<<endl;
	int x;
	cin>>x;
	bool ans=isNodePresent(root,x);
	if(ans){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	cout<<height(root)<<endl;
	return 0;
}   
