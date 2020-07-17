#include<iostream>
using namespace std;
template <typename T,typename V>
class Pair{
	T x;
	V y;
	public:
		void setx(T x){
			this->x=x;
		}
		T getx(){
			return x;
		}
		void sety(V y){
			this->y=y;
		}
		 V gety(){
			return y;
		}
		
};
int main(){
	Pair<Pair<double,char>,int> p1;
	p1.sety(65);
	Pair<double,char> p4;
	p4.setx(85.245);
	p4.sety('k');
	p1.setx(p4);
	cout<<p1.getx().getx()<<" "<<p1.getx().gety()<<" "<<endl<<p1.gety()<<endl;

/*
	Pair <int,double> p1;
	p1.setx(56);
	p1.sety(100.235);
	cout<<p1.getx()<<endl;
	cout<<p1.gety()<<endl;
	/*
	p1.setx(50);
	p1.sety(85);
	cout<<p1.getx()<<" "<<p1.gety()<<endl;
	Pair <double>p2;
	p2.setx(50.56);
	p2.sety(85.254);
	cout<<p2.getx()<<" "<<p2.gety()<<endl;
	Pair <char> p3;
	p3.setx('g');
	p3.sety('d');
	cout<<p3.getx()<<" "<<p3.gety()<<endl;
	return 0;*/
}
