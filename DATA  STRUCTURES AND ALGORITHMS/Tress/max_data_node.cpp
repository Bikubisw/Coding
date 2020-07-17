#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class TreeNode{
	public:
		T data;
		vector<TreeNode<T>*> children;
		TreeNode(T data){
			this->data=data;
		}
		~ TreeNode(){
			for(int i=0;i<children.size();i++){
				delete children[i];
			}
		}	
};
TreeNode<int>* takeinput(){
   int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    
    queue<TreeNode<int>*> pendingNodes;
    
    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
TreeNode<int>* maxtreenode(TreeNode<int>* root){
	TreeNode<int>* max=root;
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(!pendingnodes.empty()){
		TreeNode<int>*front=pendingnodes.front();
		pendingnodes.pop();
		for(int i=0;i<front->children.size();i++){
			if(front->children[i]->data>max->data){
				max=front->children[i];
				pendingnodes.push(front->children[i]);
			}
		}
	}
	return max;	
}

int main(){
	TreeNode<int>* root=takeinput();
	TreeNode<int>* ans=maxtreenode(root);
	if(ans!=NULL){
		cout<<ans->data<<endl;
	}
	return 0;
}
