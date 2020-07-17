#include<iostream>
using namespace std;
template<typename T>
class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode<T>* left;
		BinaryTreeNode<T>* right;
		BinaryTreeNode(T data){
			this->data=data;
			left=NULL;
			right=NULL;
		}
		~BinaryTreeNode(){
			delete left;
			delete right;
			
		}
};
class BST{
	BinaryTreeNode<int>* root;
	public:
		BST(){
		root=NULL;
	}
	~BST(){
		delete root;
	}
	private:
		BinaryTreeNode<int>* deleteData(int data,BinaryTreeNode<int>* node){
			if(node==NULL){
				return NULL;
			}
			 if(data<node->data){
				node->left=deleteData(data,node->left);
				return node;
			}
			else if(data>node->data){
				node->right=deleteData(data,node->right);
				return node;
			}	
			else{
				if(node->left==NULL&&node->right==NULL){
					delete node;
					return NULL;
				}
			else if(node->left==NULL){
				BinaryTreeNode<int>* temp=node->right;
				node->right=NULL;
				delete node;
				return temp;
				}
			else if(node->right==NULL){
				BinaryTreeNode<int>* temp=node->left;
				node->left=NULL;
				delete node;
				return temp;	
				}
				else
				{
					BinaryTreeNode<int>* minnode=node->right;
					while(minnode->left!=NULL){
						minnode=minnode->left;
					}
					int mindata=minnode->data;
					node->data=mindata;
					node->right=deleteData(mindata,node->right);
					return node;
				}
				
			}
	
		}
	public:
		void deleteData(int data){
			this->root=deleteData(data,root);
		}
	private:
		BinaryTreeNode<int>* insert(int data,BinaryTreeNode<int>* node){
			if(node==NULL){
				BinaryTreeNode<int>* newnode=new BinaryTreeNode<int>(data);
				return newnode;
			}
			if(data<node->data){
				node->left=insert(data,node->left);
			}
			else{
				node->right=insert(data,node->right);
			
			}
			return node;
			
		}
	
	public:
		void insert(int data){
			this->root=insert(data,root);
		}	
	void printTree(BinaryTreeNode<int>* root){
			if(root==NULL){
				return ;
			}
			cout<<root->data<<":";
			if(root->left){
				cout<<"L"<<":"<<root->left->data<<",";
			}
			 if(root->right){
			cout<<"R"<<":"<<root->right->data;
			}
			cout<<endl;
			printTree(root->left);
			printTree(root->right);
			
		}
	public:
		void printTree(){
			printTree(root);
		}
	
	private:
		bool hasData(int data,BinaryTreeNode<int>* root){
			if(root==NULL){
				return NULL;
			}
			if(root->data==data){
				return true;
			}
			else if(data<root->data){
				return hasData(data,root->left);
			}
			else{
				return hasData(data,root->right);
			}
		}
	public:
		bool hasData(int data){
			return hasData(data,root);
		}
};
int main(){
    BST *tree = new BST();
    int choice, input;
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
                cin >> input;
                tree->insert(input);
                break;
            case 2:
                cin >> input;
                tree->deleteData(input);
                break;
            case 3:
                cin >> input;
                if(tree->hasData(input)) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
                break;
            default:
                tree->printTree();
                return 0;
                break;
        }
    }
}
