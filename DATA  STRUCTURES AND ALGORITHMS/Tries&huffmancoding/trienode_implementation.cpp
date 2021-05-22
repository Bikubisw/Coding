#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <cfloat>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <cassert>
#include <utility>
#include <unordered_set>
#include <set>
#include <cmath>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,pair<int,int>> ppi;
typedef pair<int,int> pi;
#define MOD 1000000007
#define PINF LLONG_MAX
#define NINF LLONG_MIN
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
class TrieNode{
	public:
		char data;
		TrieNode** children;
		bool isterminal;
		TrieNode(char data){
			this->data=data;
			isterminal=false;
			children=new TrieNode*[26];
			for(int i=0;i<26;i++){
				 children[i]=NULL;
			}
		}
		~TrieNode(){
			 for(int i=0;i<26;i++){
				  delete children[i];
			 }
			 delete[] children;
		}
};
class Trie{
		TrieNode* root;
		public:
		 Trie(){
			root=new TrieNode('\0');
		 }
		 private:
		 void insertword(TrieNode* root,string s){
			if((int)s.length()==0){
				root->isterminal=true;
				return ;
			}
			int index=s[0]-'a';
			TrieNode *child;
			if(root->children[index]!=NULL){
				child=root->children[index];
			}else{
				child=new TrieNode(s[0]);
				root->children[index]=child;
			}
			insertword(child,s.substr(1));
		 }
		 public:
		 void insertword(string s){
			insertword(root,s); 
		 }
		 private:
		 bool searchword(TrieNode *root,string s){
			 if((int)s.length()==0){
				 if(root->isterminal==true){
					 return true;
				 }
				 return false;
			 }
			 int index=s[0]-'a';
			 TrieNode* child;
			 if(root->children[index]!=NULL){
				 child=root->children[index];
			 }
			 else {
				 return false;
			 }
			 bool ans=searchword(child,s.substr(1));
			 return ans;
		 }
		 public:
			bool searchword(string s){
				return searchword(root,s);
			}
			private:
				void removeword(TrieNode* root,string s){
				if((int)s.length()==0){
					root->isterminal=false;
					return;
				}	
				TrieNode *child;
				int index=s[0]-'a';
				if(root->children[index]!=NULL){
					child=root->children[index];
				}
				else{
					return;
				}
				removeword(child,s.substr(1));
				if(child->isterminal==false){
					for(int i=0;i<26;i++){
						if(child->children[index]!=NULL){
							return;
						}
					}
					delete child;
					root->children[index]=NULL;
				}	
				}	
			public:
				void removeword(string s){
					removeword(root,s);
				}	 
};
int main()
{
    IOS;
    Trie t;
    t.insertword("abc");
    t.insertword("are");
    t.insertword("not");
    if(t.searchword("abc")){cout<<"present"<<endl;}
    else {
		cout<<"not present"<<endl;
    }
    t.removeword("abc");
    
    if(t.searchword("abc")){cout<<"present"<<endl;}
    else {
		cout<<"not present"<<endl;
    }
    return 0;
}
