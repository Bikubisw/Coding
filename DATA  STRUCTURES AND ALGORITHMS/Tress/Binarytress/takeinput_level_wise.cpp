#include<iostream>
#include<queue>
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
	queue<Treenode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(!pendingnodes.empty()) {
		Treenode<int>* front=pendingnodes.front();
		pendingnodes.pop();
		int leftchilddata;
		cout<<"Enetr left child of"<<front->data<<endl;
		cin>>leftchilddata;
		if(leftchilddata!=-1){
			Treenode<int> *child=new Treenode<int>(leftchilddata);
			front->left=child;
			pendingnodes.push(child);
		}
		int rightchilddata ;
		cout<<"Enetr right child of"<<front->data<<endl;
		cin>>rightchilddata;
		if(rightchilddata!=-1){
			Treenode<int> *child=new Treenode<int>(rightchilddata);
			front->right=child;
			pendingnodes.push(child);
		}
	}
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
