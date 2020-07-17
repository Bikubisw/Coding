#include<iostream>
using namespace std;
template<typename T>
class Treenode{
	public:
		T data;
		Treenode<int>* left;
		Treenode<int>* right;
		Treenode(T data){
			this->data=data;
			left=NULL;
			right=NULL;
		}
		~ Treenode(){
			delete left;
			delete right;
		}
};
void printTreenode(Treenode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	if(root->left!=NULL){
		cout<<"L"<<root->left->data<<",";
	}
	if(root->right!=NULL){
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	printTreenode(root->left);
	printTreenode(root->right);	
}
Treenode<int>* takeinput(){
	int rootdata;
	cout<<"Enter root data"<<endl;
	cin>>rootdata;
	if(rootdata==-1){
		return NULL;
	}
	Treenode<int>* root=new Treenode<int>(rootdata);
	Treenode<int>* leftchild=takeinput();
	Treenode<int>* rightchild=takeinput();
	root->left=leftchild;
	root->right=rightchild;
	return root;
}
int main(){
	Treenode<int>* root=takeinput();
	
//	Treenode<int>* root=new Treenode <int>(1);
//	Treenode<int>* node1=new Treenode<int>(2);
//	Treenode<int>* node2=new Treenode<int>(3);
//	root->left=node1;
//	root->right=node2;
	printTreenode(root);
}
