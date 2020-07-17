#include<iostream>
using namespace std;
class student{
	static int totalstudents;//if we want to access this property we have to use scope resolution operator ::}
	public:
		int age;
		int rollnumber;
		//static int totalstudents;//if we want to access this property we have to use scope resolution operator ::}
	student(){
		totalstudents++;
	}
	int getrollnumber(){
		return rollnumber;
	}
	static int gettotalstudents(){
		return totalstudents;
	}
		};
int student::totalstudents=0;//initialize of static members of the class
int main(){
	student s1;
	student s2;
	student s3,s4,s5;
	cout<<student::gettotalstudents()<<endl;
	
	
/*cout<<s1.age<<" "<<s1.rollnumber<<endl;
	cout<<student::totalstudents<<endl;
	cout<<s1.totalstudents<<endl;
	s1.totalstudents=20;
	student s2;
	cout<<student::totalstudents<<endl;*/
	
	return 0;
}
