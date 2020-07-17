#include<bits/stdc++.h>
using namespace std;
class Vehicle{	//abstract class
	public:
		string color;
	virtual void print(){ //run time polymorphism and also this function is a normal virtual function
		cout<<"Vehicle"<<endl;
	}
	virtual void print()=0;//pure virtual function
	
	
};
class Car:public Vehicle{
	public:
		int numgeras;
	void print(){
		cout<<"Car"<<endl;
	}
};
int main(){
	Vehicle v;
	return 0;
}
