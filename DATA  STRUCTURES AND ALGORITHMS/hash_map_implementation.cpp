#include<iostream>
#include<string>
using namespace std;
template<typename V>
class mapnode{
	public:
		string key;
		v value;
		mapnode* next;
		mapnode(string key,v value){
			this->key=key;
			this->value=value;
			next=NULL;
		}
		~mapnode(){
			delete next;
		}
		
		
};

int main(){
	
	
	
	return 0;
}
