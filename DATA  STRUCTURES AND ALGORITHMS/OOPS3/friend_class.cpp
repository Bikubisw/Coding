#include<bits/stdc++.h>
using namespace std;
class Bus{
	public:
		void print();
};
class Truck{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
	friend class Bus;
};
void Bus::print(){
	Truck t;
	t.x=10;
	t.y=25;
	t.z=65;
	cout<<t.x<<" "<<t.y<<" "<<t.z<<endl;
}
int main(){
	Bus b;
	b.print();
	return 0;
}


