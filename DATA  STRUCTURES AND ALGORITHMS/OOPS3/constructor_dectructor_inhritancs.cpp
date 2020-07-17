#include<bits/stdc++.h>
using namespace std;
class Vehicle{
	public:
		int maxspeed;
	private:
		string color;
	protected:
		int numtires;
	public:
//		Vehicle(){
//		cout<<"Vehicle constructor is called"<<endl;
//	}
		Vehicle(int data){
			cout<<"Vechiles parameterized constructor is called"<<endl;
			maxspeed=data;
		}
		~Vehicle(){
		cout<<"Vehile destructor is called"<<endl;
	}
};
class Car:protected Vehicle{
	public:
		int numgears;
	Car(int x):Vehicle(x){
		cout<<"Car's parameterrized constructor is called"<<endl;
	}
	~Car(){
		cout<<"Car destructor is called"<<endl;
	}
	void print(){
		cout<<"MAx Speed is:"<<maxspeed<<endl;
		cout<<"Numtyres is:"<<numtires<<endl;
		cout<<"Numgears is"<<numgears<<endl;
		//cout<<"Color is"<<color<<endl;
	}
	
};
class Hondacity:public Car{
	public:
		Hondacity():Car(5){
			cout<<"Hondacity Constructor is called"<<endl;
		}
		~Hondacity(){
			cout<<"Hondacity destructor is called"<<endl;
		}
};
int main(){
	//Vehicle v1;
	//v1.color="red";
	//v1.maxspeed=60;
	//v1.numtyres=4;
	//Car c1(5);
	Hondacity h1;
	//c1.maxspeed=40;
	
	return 0;
}
