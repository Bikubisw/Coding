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
		~ Treenode(){
			for(int i=0;i<child.size();i++){
				delete child[i];
			}
		}	
};
Treenode<int>* takeinput(){
	int rootdata;
	cout<<"Enter the root data"<<endl;
	cin>>rootdata;
	Treenode<int>* root=new Treenode<int>(rootdata);
	queue<Treenode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(!pendingnodes.empty()){
		Treenode<int>* front= pendingnodes.front();
		pendingnodes.pop();
		cout<<"Enter num of child"<<front->data<<endl;
		int numchild;
		cin>>numchild;
		for(int i=0;i<numchild;i++)
		{
			int childdata;
			cout<<"Enetr"<<i<<"th child of"<<front->data<<endl;
			cin>>childdata;
			Treenode<int>* children=new Treenode<int>(childdata);
			front->child.push_back(children);
			pendingnodes.push(children);
		}
	}
	return root;
}
Treenode<int>* maxtreenode(Treenode<int>* root){
	
}

int main(){
	Treenode<int>* root=takeinput();
	Treenode<int>* ans=maxtreenode(root);
	if(ans!=NULL){
		cout<<ans->data<<endl;
	}
	return 0;
}
