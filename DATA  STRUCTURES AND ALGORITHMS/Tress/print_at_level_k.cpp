#include<iostream>
using namespace std;
#include<vector>
#include<queue>
template<typename T>
class TreeNode{
	public:
		T data;	
		vector<TreeNode<T>*> child;
		TreeNode(T data){
			this->data=data;
		}
		~TreeNode() {
        for (int i = 0; i<child.size(); i++) {
            delete child[i];
        }
};
TreeNode<int>* takeinput(){
	int rootdata;
	cin>>rootdata;
	TreeNode<int>*root=new TreeNode<int>(rootdata);
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(!pendingnodes.empty()){
		TreeNode<int>* front=pendingnodes.front();
		pendingnodes.pop();
		int numchild;
		cin>>numchild;
		for(int i=0;i<numchild;i++){
			int childdata;
			cin>>childdata;
			TreeNode<int>* children=new TreeNode<int>(childdata);
			front->child.push_back(children);
			pendingnodes.push(children);
		}
	}
	
}
void print_at_level_k(TreeNode<int>* root,int k){
	if(k==0){
		cout<<root->data<<endl;
		return;
	}
	for(int i=0;i<root->child.size();i++){
		print_at_level_k(root->child[i],k-1);
	}
}
int main(){
	TreeNode<int>* root=takeinput();
	int k;
	cout<<"Enter the level: "<<endl;
	cin>>k;
	print_at_level_k(root,k);
	return 0;
}
