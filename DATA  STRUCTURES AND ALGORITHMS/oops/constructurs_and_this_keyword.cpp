#include<iostream>
using namespace std;
class student{
	public:
		int rollnumber;
	private:
		int age;
	public://default constructurs
		student(){
			cout<<"constructor 1 called"<<endl;
		}
		//paramiterized constructurs
		student(int rollnumber){
			cout<<"constructor 2 called"<<endl;
			this->rollnumber=rollnumber;
		}
		student(int a,int r){
			cout<<"adress of this: "<<this<<endl;
			cout<<"constructors 3 called"<<endl;
			this->age=a;
		    this->rollnumber=r;
		}
		
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
	student s1(10,524);
	cout<<"adress of s1: "<<&s1<<endl;
	student s2(120);
	s2.display();
	//	student*s2=new student;
//	s1.display();
//	s2->display();
//	student s4(10);
//	s4.display();
//	student*s5=new student(101);
//	s5->display();
//	student s6(20,586);
//	s6.display();
//	return 0;
}
