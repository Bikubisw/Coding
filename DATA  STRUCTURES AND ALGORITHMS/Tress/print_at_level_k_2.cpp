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
void print_at_level_k(Treenode<int>*root,int k){
	if(k==0){
		cout<<root->data<<endl;
		return;
	}
	for(int i=0;i<root->child.size();i++){
		print_at_level_k(root->child[i],k-1);
	}
}
int main(){
	
	Treenode<int>*root= takeinput_level_wise();
	int k;
	cout<<"Enter the level: "<<endl;
	cin>>k;
	print_at_level_k(root,k);
	return 0;
}
