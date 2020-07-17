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
		void print(){
			cout<<"Vehicle is called"<<endl;
		}
		Vehicle(int data){
			cout<<"Vechiles parameterized constructor is called "<<data<<endl;
			maxspeed=data;
		}
		~Vehicle(){
		cout<<"Vehile destructor is called"<<endl;
	}
};
class Car:virtual public Vehicle{
	public:
		int numgears;
	Car():Vehicle(5){
		cout<<"Car's default constructor is called"<<endl;
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
class Truck:virtual public Vehicle{
	public:
		Truck():Vehicle(4){
			cout<<"Truck Constructor is called"<<endl;
		}
	
};
class Bus:public Car,public Truck{
	public:
	Bus():Vehicle(8){
		cout<<"Bus Constructor is called"<<endl;
	}
	
};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Bus b;
//	b.Car::print();	
}
