#include<iostream>
#include<vector>
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
void printTree(Treenode<int>*root){
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
	Treenode<int>*root=new Treenode<int>(10);
	Treenode<int>*node1=new Treenode<int>(20);
	Treenode<int>*node2=new Treenode<int>(30);
	Treenode<int>*node3=new Treenode<int>(40);

	root->child.push_back(node1);
	root->child.push_back(node2);
	node1->child.push_back(node3);
	
	printTree(root);
	return 0;
}
