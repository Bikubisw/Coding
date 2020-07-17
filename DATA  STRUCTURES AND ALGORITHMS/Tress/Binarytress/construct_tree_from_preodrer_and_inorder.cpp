#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
BinaryTreeNode<int>* buildTreeHelper(int *preorder, int *inorder,int instart,int inend,int prestart,int preend) 
{
	if(instart>inend){
		return NULL;
	}
	int rootdata=preorder[prestart];
	int rootindex=-1;
	for(int i=instart;i<=inend;i++){
		if(inorder[i]==rootdata){
			rootindex=i;
			break;
		}
	}
	int linstart=instart;
	int linend=rootindex-1;
	int lprestart=prestart+1;
	int lpreend=linend-linstart+lprestart;
	int rinstart=rootindex+1;
	int rinend=inend;
	int rprestart=lpreend+1;
	int rpreend=preend;
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootdata);
	root->left=buildTreeHelper(preorder,inorder,linstart,linend,lprestart,lpreend);
	root->right=buildTreeHelper(preorder,inorder,rinstart,rinend,rprestart,rpreend);
	return root;
	
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
BinaryTreeNode<int>*root=buildTreeHelper(preorder,inorder,0,inLength-1,0,preLenght-1);
return root;
}
void printLevelATNewLine(BinaryTreeNode<int> *root) {
		queue<BinaryTreeNode<int>*> q;
		q.push(root);
		q.push(NULL);
		while(!q.empty()) {
			BinaryTreeNode<int> *first = q.front();
			q.pop();
			if(first == NULL) {
				if(q.empty()) {
					break;
				}
				cout << endl;
				q.push(NULL);
				continue;
			}
			cout << first -> data << " ";
			if(first -> left != NULL) {
				q.push(first -> left);
			}
			if(first -> right != NULL) {
				q.push(first -> right);
			}
		}
}

int main() {
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for(int i=0;i<size;i++)
		cin>>pre[i];
    for(int i=0;i<size;i++)
		cin>>in[i];
    BinaryTreeNode<int>* root = buildTree(pre, size, in, size);
    printLevelATNewLine(root);
}
