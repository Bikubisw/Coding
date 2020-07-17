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

bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
 if(root1->children.size()==0&&root2->children.size()==0){
 	if(root1->data==root2->data){
 		return true;
	 }
 }
 if(root1->children.size()==0||root2->children.size()==0){
 	return false;
 }
 bool ans1;
 bool ans2;
 for(int i=0;i<root1->children.size();i++){
 	ans1=isIdentical(root1->children[i],root2->children[i]);
 }
 for(int i=0;i<root2->children.size();i++){
 	ans2=isIdentical(root1->children[i],root2->children[i]);
 }
 return ans1&&ans2;
 
}

int main() {
    TreeNode<int>* root1 = takeInputLevelWise();
    TreeNode<int>* root2 = takeInputLevelWise();
    if(isIdentical(root1, root2)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

