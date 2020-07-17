#include<iostream>
using namespace std;
class student{
	public:
		int rollnumber;
	private:
		int age;
	public:
	void display(){
		cout<<age<<" "<<rollnumber<<endl;
	}
	int getage(){
		return age;
	}
	void ageset(int a,int password){
		if(a<0){
			return;
		}
		if(password!=123){
			return;
		}
		age=a;
	}
	
};
int main(){
	student s1;
	s1.ageset(-56,582);
	s1.display();
	student*s2=new student;
	(*s2).display();
	//or
	//s2->display();
		
	return 0;
}
