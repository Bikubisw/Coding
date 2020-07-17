#include<iostream>
#include<string>
using namespace std;
template<typename v>
class mapnode{
	string key;
	v value;
	mapnode* next;
	mapnode(string key, v value){
		this->key=key;
		this->value=value;
		next=NULL;
	}
};
template <typename v>
class ourmap{
	mapnode<v>**buckets;
	int size;
	int numbuckets;
	ourmap(){
		size=0;
		numbuckets=5;
		buckets=new mapnode<v>*[numbuckets];
		for(int i=0;i<numbuckets;i++){
			buckets[i]=NULL;
		}
	}
		~ourmap(){
		for(int i=0;i<numbuckets;i++){
			delete buckets[i];
		}
		delete  [] buckets;
		}
		
		
	
};
int main(){
	
	return 0;
}
