#include<iostream>
using namespace std;
class student{
	char *name;
	int rollno;
	public:
		student(char *name,int rollno){
			this->name=name;
			this->rollno=rollno;
		}
		void show(){
			cout<<"\n Name of the student: "<<name;
			cout<<"\n student roll number is: "<<rollno;
		}
};
class marks{
	int sem,sub1,sub2,sub3,sub4;
	public:
		marks(char*name,int rollno,int sem,int sub1 ,int sub2 ,int sub3 ,int sub4){
			this->sem=sem;
			this->sub1=sub1;
			this->sub2=sub2;
			this->sub3=sub3;
			this->sub4=sub4;
		}
		void show(){
			cout<<"\n semester: "<<sem;
			cout<<"\n sub1:  "<<sub1;
			cout<<"\n sub2:  "<<sub2;
			cout<<"\n sub2:  "<<sub3;
			cout<<"\n sub4:  "<<sub4;

		}
		
};
class report:public marks{
	int id;
	public:
		report(char*name,int rollno,int sem,int sub1 ,int sub2 ,int sub3 ,int sub4,int id):marks(name,rollno,sem,sub1,sub2,sub3,sub4){
			this->id=id;
	}
		void show(){
			cout<<"\n students report:";
			cout<<"\n Report id: ";
		}
};
int main(){
	report r("bikram",547,4,85,75,95,25,695);
	r.show();
	
	r.marks::show();
}
