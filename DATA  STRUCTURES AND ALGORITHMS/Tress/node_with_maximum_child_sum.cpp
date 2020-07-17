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

TreeNode<int>* maxSumNode(TreeNode<int> *root){
int maxsum=0;
int currentsum=0;
queue<TreeNode<int>*> pendingnodes;
TreeNode<int>* temp=root;
pendingnodes.push(root);
while(!pendingnodes.empty()){
	TreeNode<int>* front=pendingnodes.front();
	currentsum=front->data;
	pendingnodes.pop();
	for(int i=0;i<front->children.size();i++){
		currentsum+=front->children[i]->data;
		pendingnodes.push(front->children[i]);
	}
	if(currentsum>maxsum){
		temp=front;
		maxsum=currentsum;
	}
	
}
return temp;
    
}


int main() {
    TreeNode<int>* root = takeInputLevelWise();
    TreeNode<int>* ans = maxSumNode(root);
    if(ans != NULL) {
        cout << ans -> data << endl;
    }
}



