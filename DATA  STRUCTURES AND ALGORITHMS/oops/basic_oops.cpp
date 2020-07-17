#include<iostream>
using namespace std;
class student{
	public:
		int rollnumber;
		int age;
};
int main(){
	//statically
	//student s1,s2;
	//student s3,s4;
	//dynamically
	student*s6=new student();
 	//cin>>s1.age;
	//in>>s1.rollnumber;
	//cout<<s1.age<<" "<<s1.rollnumber<<endl;
	(*s6).age=85;
	(*s6).rollnumber=102;
	//or you can write
	s6->age=52;
	s6->rollnumber=85;
	cout<<s6->age<<endl;
	
	
	return 0;
}
