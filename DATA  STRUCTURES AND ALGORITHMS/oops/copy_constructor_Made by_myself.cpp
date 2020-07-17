#include<iostream>
#include<cstring>
using namespace std;
class student{
	int age;//default is private
	public:
		char*name;
	public:
		student(int age,char*name){
			this->age=age;
			//shallow copy
			//this->name=name; we should avoid this//
			
			//deep copy
			this->name=new char[strlen(name)+1];
			strcpy(this->name,name);
			
				}
		student(student const &s){
			this->age=s.age;
		//	this->name=s.name;shallow copy we sholud avoid this
			this->name=new char[strlen(name)+1];
			strcpy(this->name,s.name);
			
		}
		
		
		
		
		void display(){
			cout<<name<<" "<<age<<endl;
		}
		
};
int main(){
	char name[]="abcd";
	student s1(20,name);
	s1.display();
	
	
	student s2(s1);
	s2.name[0]='x';
	s2.display();
	s1.display();
	return 0;
	
}
