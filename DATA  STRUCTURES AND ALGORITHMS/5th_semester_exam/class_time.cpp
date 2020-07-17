#include<iostream>
using namespace std;
class Time{
	int *hh;
	int *mm;
	int *ss;
	public:
		Time(){
		hh=new int;
		mm=new int;
		ss=new int;
		*hh=0;
		*mm=0;
		*ss=0;	
	}
		Time(int a,int b ,int c){
		hh=new int;
		mm=new int;
		ss=new int;
		*hh=a;
		*mm=b;
		*ss=c;
	}
		~Time(){
		
		cout<<"Destructor is called!!!Memory is deallocated"<<endl;
		
	}
	void show(){
		cout<<"Time in HH:MM:SS format is"<<*hh<<":"<<*mm<<":"<<*ss<<endl;
	}
};
int main(){
	Time t1;
	Time t2(20,40,12);
	Time t3(t2);
	t1.show();
	t2.show();
	t3.show();	
	return 0;
}
