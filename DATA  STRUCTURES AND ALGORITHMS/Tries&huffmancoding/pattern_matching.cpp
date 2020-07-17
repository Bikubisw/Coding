#include<iostream>
#include<vector>
#include<string>
using namespace std;
class TrieNode{
	public:
		char data;
		TrieNode **children;
		bool isTerminal;
		TrieNode(char data){
			this->data=data;
			children=new TrieNode*[26];
			for(int i=0;i<26;i++){
				children[i]=NULL;
			}
			isTerminal=false;
		}
};
class Trie{
 	TrieNode* root;
 	public:
 		int count;
 		Trie(){
 			this->count=0;
 			root=new TrieNode('\0');
		 }
		 bool insertWord(TrieNode* root,string word){
		 	if(word.size()==0){
		 		if(!root->isTerminal){
		 			root->isTerminal=true;
		 			return true;
				 }
				 else{
				 	return false;
				 }
			 }
			 int index=word[0]-'a';
			 TrieNode* child;
			 if(root->children[index]!=NULL){
			 	child=root->children[index];
			 }
			 else{
			 	child=new TrieNode(word[0]);
			 	root->children[index]=child;
			 }
			return insertWord(child,word.substr(1));
			 
		 }
		 void insertWord(string word){
		 	if(insertWord(root,word)){
		 		this->count++;
			 }
		 }
		bool searchword(TrieNode*root,string word){
				if(word.size()==0){
					if(root->isTerminal==false||root->isTerminal==true){
						return true;
				 }
				}
				int index=word[0]-'a';
				TrieNode* child;
				if(root->children[index]!=NULL){
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
		bool patternMatching(vector<string> vect, string pattern) {
			for(int i=0;i<vect.size();i++){
				int j=0;
				while(j<vect[i].length()){
					insertWord(vect[i].substr(j));
					j++;
				}
			}
			if(search(pattern)){
				return true;
			}
			else{
				return false;
			}	
	}
};
int main(){
	Trie t;
	int n;
	cin>>n;
	vector<string> vect;
	for(int i=0;i<n;i++){
		string word;
		cin>>word;
		vect.push_back(word);
	}
	string pattern;
	cin>>pattern;
	if (t.patternMatching(vect, pattern)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
	
	return 0;
}
