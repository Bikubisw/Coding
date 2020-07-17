#include<iostream>
using namespace std;
class student{
	public:
		int rollnumber;
	private:
		int age;
	public:
		// destructors
		~student(){
			cout<<"destructor is called"<<endl;
		}
	//default constructurs
		student(){
			cout<<"constructor 1 called"<<endl;
		}
		//paramiterized constructurs
		student(int rollnumber){
			cout<<"constructor 2 called"<<endl;
			this->rollnumber=rollnumber;//mandatory
		}
		student(int a,int r){
		//	cout<<"adress of this: "<<this<<endl;
			cout<<"constructors 3 called"<<endl;
			this->age=a;//optional
		    this->rollnumber=r;//optional hhay samaj may aya
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
	student s1(10,546);
	student s2(521,85);
	
	student*s3=new student(51,456);
	s2=s1;
	*s3=s2;
	s2=*s3;
	delete s3;	
	
	//	student s1(10,524);
//	cout<<endl;
//	s1.display();
//	student s2(s1);
//	s2.display();
//	student*s3=new student(20,564);
//	cout<<"s3 is: "<<endl;
//	s3->display();
//	student s4(*s3);
//	s4.display();
	//cout<<"adress of s1: "<<&s1<<endl;
	//student s2(120);
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
