#include<iostream>
using namespace std;
class Flight{
	int flinum;
	char desname[100];
	float distance;
	float fuel;
	void calfuel(){
		if(distance<=1000){
			fuel=500;
		}
		else if(distance>=1000&&distance<=2000){
			fuel=1100;
		}
		else{
			fuel=2200;
		}
	}
	public:
		void feedinfo(){
			
		}
};
int main(){
	
	return 0;
}
