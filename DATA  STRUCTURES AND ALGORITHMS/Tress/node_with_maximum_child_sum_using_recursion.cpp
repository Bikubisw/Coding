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
template<typename T>
class pairnode{
	public:
		TreeNode<T>* node;
		T sum;
};
pairnode<int> maxSumNodehelper(TreeNode<int>* root){
	if(root==NULL){
		pairnode<int> ans;
		ans.node=NULL;
		ans.sum=INT_MIN;
		return ans;
	}
	int sum=root->data;
	for(int i=0;i<root->children.size();i++){
		sum+=root->children[i]->data;
	}
	pairnode<int> ans;
	ans.node=root;
	ans.sum=sum;
	for(int i=0;i<root->children.size();i++){
		pairnode<int> smallans=maxSumNodehelper(root->children[i]);
		if(smallans.sum>ans.sum){
			ans=smallans;
		}
	}
	return ans;
}
TreeNode<int>* maxSumNode(TreeNode<int>* root){
	return maxSumNodehelper(root).node;
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
    TreeNode<int>* ans = maxSumNode(root);
    if(ans != NULL) {
        cout << ans -> data << endl;
    }
}
