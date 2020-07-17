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
		if(password!=123){
			return;
		}
		if(a<0){
			return;
		}
		age=a;
	}
	
};
int main(){
	student s1;
	student*s2=new student;
	s1.ageset(20,546);
	s2->ageset(25,850);
	s1.display();
	s2->display();
		return 0;
}
