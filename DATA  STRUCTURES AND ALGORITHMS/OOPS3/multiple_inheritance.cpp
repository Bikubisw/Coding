#include<bits/stdc++.h>
using namespace std;
class Teacher{
public:
	string name;
	int age;
	void print(){
		cout<<"Teacher"<<endl;
	}	
};
class Student{
	public:
		void print(){
			cout<<"Student"<<endl;
		}	
};
class Ta:public Teacher,public Student{
	public:
	void print(){
		cout<<"Ta is called"<<endl;
	}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Ta a;
	a.print();
		//a.Teacher::print();
}
