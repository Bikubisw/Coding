#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class Treenode{
	public:
		T data;
		vector<Treenode<T>*> child;
		Treenode(T data){
			this->data=data;
		}
};
Treenode<int>* takeinput_level_wise(){
		int rootdata;
		cout<<"Enter root data "<<endl;
		cin>>rootdata;
		Treenode<int>* root=new Treenode<int>(rootdata);
		queue<Treenode<int>*> pendingnodes;
		pendingnodes.push(root);
		while(pendingnodes.size()!=0){
			Treenode<int>* front=pendingnodes.front();
			pendingnodes.pop();
			cout<<"Enter num of child of "<<front->data<<endl;
			int numchild;
			cin>>numchild;
			for(int i=0;i<numchild;i++){
				int childdata;
				cout<<"Enter"<<i<<"th child of"<<front->data<<endl;
				cin>>childdata;
				Treenode<int>* children=new Treenode<int>(childdata);
				front->child.push_back(children);
				pendingnodes.push(children);
					}
	}
	return root;		
}
void printTree(Treenode<int>*root){
	if(root==NULL){
		return ;
	}
	cout<<root->data<<":";
	for(int i=0;i<root->child.size();i++){
		cout<<root->child[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->child.size();i++){
		printTree(root->child[i]);
	}
}
int main(){
//	Treenode<int>*root=new Treenode<int>(10);
//	Treenode<int>*node1=new Treenode<int>(20);
//	Treenode<int>*node2=new Treenode<int>(30);
//	Treenode<int>*node3=new Treenode<int>(40);
//	root->child.push_back(node1);
//	root->child.push_back(node2);
//	node1->child.push_back(node3);
	Treenode<int>*root= takeinput_level_wise();
	printTree(root);
	// TODO delete the tree
	return 0;
}
