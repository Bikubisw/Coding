#include <iostream>
#include <string>
using namespace std;

#include <vector>
#include <string>
#include <vector> 
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;
	int childCount;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
		childCount = 0;
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
			root->childCount++;
		}

		// Recursive call
		return insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}

	bool isPalindrome(string str) 
{ 
    int len = str.length(); 
    for (int i = 0; i < len/2; i++ ) 
        if (str[i] != str[len-i-1]) 
            return false; 
  
    return true; 
}

	bool findIfPalindromePair(vector<string> vect) {
		
    // Consider each pair one by one 
    for (int i = 0; i< vect.size()-1; i++) 
    { 
        for (int j = i+1; j< vect.size() ; j++) 
        { 
            string check_str; 
  
            // concatenate both strings 
            check_str = vect[i] + vect[j]; 
  
            // check if the concatenated string is 
            // palindrome 
            if (isPalindrome(check_str)) 
                return true; 
  
            // check for other combination of the two strings 
            check_str = vect[j] + vect[i]; 
            if (isPalindrome(check_str)) 
                return true; 
        } 
    } 
    return false;
	}
};


int main() {
    Trie t;
    vector <string> vect;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        vect.push_back(word);
    }
    
    bool ans = t.findIfPalindromePair(vect);
    if (ans){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
