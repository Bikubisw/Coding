#include<bits/stdc++.h>
using namespace std;
class Vehicle{
	public:
		int maxspeed;
	private:
		string color;
	protected:
		int numtires;
};
class Car:protected Vehicle{
	public:
		int numgears;
	void print(){
		cout<<"MAx Speed is:"<<maxspeed<<endl;
		cout<<"Numtyres is:"<<numtires<<endl;
		cout<<"Numgears is"<<numgears<<endl;
		//cout<<"Color is"<<color<<endl;
	}
	
};
int main(){
	Vehicle v1;
	//v1.color="red";
	v1.maxspeed=60;
	//v1.numtyres=4;
	Car c1;
	c1.maxspeed=40;
	
	return 0;
}
