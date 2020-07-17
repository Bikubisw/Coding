#include<iostream>
using namespace std;
#include "fraction_class.cpp"
using namespace std;
int main(){
	fraction f1(20,2);
	fraction f2(100,8);
	f1.add(f2);
	f1.print();
	f2.print();
	f1.multiply(f2);
	f1.print();
	f2.print();
	return 0;
}
