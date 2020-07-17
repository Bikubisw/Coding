#include<iostream>
using namespace std;
class student{
	public:
		int rollnumber;
	private:
		int age;
	public:
		student(){
			cout<<"constructors1 is called"<<endl;
		}
		student(int r){
			cout<<"constructors 2 is called"<<endl;
			rollnumber=r;
		}
		student(int r,int a){
			cout<<"adress of this is : "<<this<<endl;
			cout<<"constructors3 is called"<<endl;
			rollnumber=r;
			age=a;
		}
		void display(){
			cout<<rollnumber<<" "<<age<<endl;
		}
		int getage(){
			return age;
		}
		void ageset(int a,int password){
			if(a<0){
				return ;
			}
			if(password!=123){
				return;
			}
			age=a;
		}
		
};
int main(){
	student s1(23,456);
	cout<<"adress of s1 is: "<<&s1<<endl;
//	student s2(102);
//	student *s3=new student(100,582);
//	s3->display();
//	s1.display();
//	s2.display();
	return 0;
}
