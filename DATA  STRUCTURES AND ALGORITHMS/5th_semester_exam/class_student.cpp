#include<iostream>
#include<cstring>
using namespace std;
class student{
	int admnno;
	char sname[100];
	float math,eng,science,total;
	void ctotal(){
		total=math+eng+science;
	}
	public:
		void take_data(){
		cout<<"Enter the admission no: ";
		cin>>admnno;
		cout<<"\n Enter the student name: ";
		cin.ignore();
		cin.getline(sname,100);
		cout<<"\n Enter the marks in English: ";
		cin>>eng;
		cout<<"\nEnter the marks in Maths: ";
		cin>>math;
		cout<<"\n Enter the marks in science: ";
		cin>>science;
		ctotal();
}
		void print_data(){
			cout<<"Admission number: "<<admnno<<endl;
			cout<<"Student name: "<<sname<<endl;
			cout<<"Marks in math: "<<math<<endl;
			cout<<"Marks in english: "<<eng<<endl;
			cout<<"Marks in science: "<<science<<endl;
			cout<<"Total marks: "<<total<<endl;
		}
		
};
int main(){
		student s1;
		s1.take_data();
		s1.print_data();
	
	return 0;
}
