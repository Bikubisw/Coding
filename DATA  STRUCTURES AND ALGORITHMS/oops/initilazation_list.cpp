#include<iostream>
using namespace std;
class student{
	public:
		int age;
		const int rollnumber;
		int &x;//age reference variable
		student(int r,int a):rollnumber(r),age(a),x(this->age){
			
		}
		
		
		
	
	void display(){
		cout<<age<<" "<<rollnumber<<" "<<x<<endl;
	}
		
};
int main(){
	student s1(50,54);
	s1.age=120;
	s1.display();
	return 0;
	
}
