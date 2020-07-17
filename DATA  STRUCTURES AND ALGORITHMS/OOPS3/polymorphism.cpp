#include<bits/stdc++.h>
using namespace std;
class Vehicle{
	public:
		string color;
	virtual void print(){ //run time polymorphism
		cout<<"Vehicle"<<endl;
	}
};
class Car:public Vehicle{
	public:
		int numgears;
//	void print(){
//		cout<<"Car"<<endl;
//	}
};
int main(){
	Vehicle v;
	Car c;
	v.print();
	c.print();
	Vehicle*v2;
	Vehicle*v1=new Vehicle;
	v2=&c;// so ew can write it Vehicle*v2=new Car;
	v1->print();
	v2->print();//
	
	return 0;
}
