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
void printTreenode(TreeNode<int>* root){
	cout<<root->data<<":";
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(!pendingnodes.empty()){
		TreeNode<int>* front=pendingnodes.front();
		pendingnodes.pop();
		for(int i=0;i<front->child.size();i++){
			cout<<front->child[i]->data<<",";
			pendingnodes.push(front->child[i]);
		}
		
		
	}
	

}
int main(){
	TreeNode<int>* root=takeinput();
	printTreenode(root);
	return 0;
}
