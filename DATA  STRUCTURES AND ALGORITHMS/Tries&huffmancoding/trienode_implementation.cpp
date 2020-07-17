#include<iostream>
#include<string>
using namespace std;
class Trienode{
	public:
		char data;
		Trienode** children;
		bool isterminal;
		Trienode(char data){
			this->data=data;
			children=new Trienode*[26];
			for(int i=0;i<26;i++){
				children[i]=NULL;
			}
			isterminal=false;	
		}	
};
class Trie{ 
		Trienode *root;
		public:
			Trie(){
				root=new Trienode('\0');
			}
			// inserting elements in our tries//
			void insertWord_(Trienode* root,string word){
			if(word.size()==0){
				root->isterminal=true;
				return;
			}
			int index=word[0]-'a';
			Trienode*child;
			if(root->children[index]!=NULL){
				child=root->children[index];
			}
			else{
				child=new Trienode(word[0]);
				root->children[index]=child;
			}
			insertWord_(child,word.substr(1));
		}
		void insertWord(string word)
			{
			insertWord_(root,word); 	
			}
		// searching elements in our tries
		bool searchword(Trienode*root,string word){
				if(word.size()==0){
					if(root->isterminal==true){
						return true;
					}
					else{
						return false;
					}
				}
				int index=word[0]-'a';
				Trienode* child;
				if(child!=NULL){
					child=root->children[index];
				}
				else{
					return false;
				}
				bool ans=searchword(child,word.substr(1));
				return ans;
		}
		
    	bool search(string word) {
         return searchword(root,word);
    }
    // removing elements from our tries
    	void removeword_(Trienode* root,string word){
    		if(word.size()==0){
    			root->isterminal=false;
    			return;
			}	
			Trienode*child;
			int index=word[0]-'a';
			if(root->children[index]!=NULL){
				child=root->children[index];	
			}
			else{
				return; 
			}
			removeword_(child,word.substr(1));
		// remove child node if it is uselesss
			if(child->isterminal==false){
				for(int i=0;i<26;i++){
					if(child->children[i]!=NULL){
						return;
					}
				}
				delete child;
				root->children[index]=NULL;
			}
		}
    	void removeword(string word){
    	removeword_(root,word);
	}
};
int main(){
	Trie t;
	t.insertWord("and");
	t.insertWord("are");
	t.insertWord("not");
	cout<<t.search("and")<<endl;
	t.removeword("and");
	cout<<t.search("and")<<endl;
	return 0;
}
