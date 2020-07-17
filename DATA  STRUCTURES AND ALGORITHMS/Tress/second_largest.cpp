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
TreeNode<int>* secondLargest(TreeNode<int>* root){
	int largest=INT_MIN;
	int secondlargest=INT_MIN;
	TreeNode<int> *largestnode=NULL;
	TreeNode<int>* secondlargestnode=NULL;
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(!pendingnodes.empty())
	{
	TreeNode<int>* front=pendingnodes.front();
	pendingnodes.pop();
	for(int i=0;i<front->children.size();i++){
		if(front->data>front->children[i]->data){
			secondlargest=largest;
			largest=front->data;
			secondlargestnode=largestnode;
			largestnode=front;	
		}
		pendingnodes.push(front->children[i]);
	}
	
	}
	return secondlargestnode;
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

