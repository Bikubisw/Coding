#include <iostream>
using namespace std;
#include <vector>
template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data) {
        this->data = data;
    }
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
#include <queue>
#include <climits>
template<typename T>
class secondlargestnode{
	public:
		TreeNode<T>* largest;
		TreeNode<T>* secondlargest;
		secondlargestnode(TreeNode<T>* first,TreeNode<T>* second){
			this->largest=first;
			this->secondlargest=second;
		}
};
secondlargestnode<int>* secondLargesthelper(TreeNode<int>*root){
	if(root==NULL){
		secondlargestnode<int>* ans=new secondlargestnode<int>(NULL,NULL);
		return ans;
	}
	secondlargestnode<int>* ans=new secondlargestnode<int>(root,NULL);
	for(int i=0;i<root->children.size();i++){
		secondlargestnode<int>*temp=secondLargesthelper(root->children[i]);
		if(temp->largest->data>ans->largest->data){
			if(temp->secondlargest==NULL){
				ans->secondlargest=ans->largest;
				ans->largest=temp->largest;
			}
			else{
				if(temp->secondlargest->data>ans->largest->data){
					ans->secondlargest=temp->secondlargest;
					ans->largest=temp->largest;
				}
				else{
					ans->secondlargest=ans->largest;
					ans->largest=temp->largest;
				}
			}
		}
		else{
			if((ans->largest->data!=temp->largest->data)&&(ans->secondlargest==NULL||temp->largest->data>ans->secondlargest->data)){
				ans->secondlargest=temp->largest;
			}
		}
		
	}
	return ans;
}
TreeNode<int>* secondLargest(TreeNode<int>*root){
	return secondLargesthelper(root)->secondlargest;
}
TreeNode<int>* takeInputLevelWise() {
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
int main() {
    TreeNode<int>* root = takeInputLevelWise();
    TreeNode<int>* ans = secondLargest(root);
    if(ans == NULL) {
        cout << INT_MIN << endl;
    }
    else {
        cout << ans -> data << endl;
    }
}

