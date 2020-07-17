#include <iostream>
#include <string>
using namespace std;
#include <vector>
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;
	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
	}
};
class Trie {
	TrieNode *root;
	public :
	int count;
	Trie() {
		this->count = 0;
		root = new TrieNode('\0');
	}
	bool insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			if (!root->isTerminal) {
				root -> isTerminal = true;
				return true;	
			} else {
				return false;
			}
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}
		return insertWord(child, word.substr(1));
	}
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}
	TrieNode* searchword(TrieNode*root,string word){
		if(word.size()==0){
			return root;
				}
		int index=word[0]-'a';
		TrieNode* child;
		if(root->children[index]!=NULL){
		child=root->children[index];
			}
		else{
		return NULL;
				}
		TrieNode* ans=searchword(child,word.substr(1));
		return ans;
		}
	TrieNode* search(string word){
	return searchword(root,word);
	}
	 void allpossibleoutcomes_print(TrieNode* root,string pattern,string output){
	 	if(root->isTerminal==true){
	 		cout<<pattern+output<<endl;
		 }
		 
		 for(int i=0;i<26;i++){
		 	TrieNode* child;
		 	if(root->children[i]!=NULL){
		 		child=root->children[i];
		 		allpossibleoutcomes_print(child,pattern,output+root->children[i]->data);
			 
		 }
	 }
	void allpossibleoutcomes(TrieNode* root,string pattern){
		allpossibleoutcomes_print(root,pattern,"");
	}
    void autoComplete(vector<string> input, string pattern) {
     	for(int i=0;i<input.size();i++){
     		insertWord(input[i]);
		 }
		 TrieNode* node=search(pattern);
		 if(node!=NULL){
		 	allpossibleoutcomes(node,pattern);
		 }
		 else{
		 	return;
		 }
		 
    }
};
int main() {
	Trie t;
    int N;
    cin >> N;
    string pattern;
    vector<string> vect;
    for (int i=0; i < N; i++) {
        string word;
        cin >> word;
        vect.push_back(word);
    }
    cin >> pattern;
    t.autoComplete(vect, pattern);
}

