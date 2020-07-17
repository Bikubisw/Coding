#include<iostream>
using namespace std;
class ComplexNumbers{
	private:
		int real;
		int imaginary;
	public:
		ComplexNumbers(int real ,int imaginary){
			this->real=real;
			this->imaginary=imaginary;
		}
		void print(){
			cout<<real<<" "<<"+"<<" "<<"i"<<imaginary<<endl;
		}
		void plus(ComplexNumbers const &c2){
			int realpart=this->real+c2.real;
			int imaginarypart=this->imaginary+c2.imaginary;
			this->real=realpart;
			this->imaginary=imaginarypart;
		}
		void multiply(ComplexNumbers const &c2){
			int realpart=(this->real*c2.real)+((this->imaginary*c2.imaginary)*(-1));
			int imaginarypart=(this->real*c2.imaginary)+(c2.real*this->imaginary);
			this->real=realpart;
			this->imaginary=imaginarypart;
		}
};
int main(){
	int real1,imaginary1,real2,imaginary2;
	cin>>real1>>imaginary1;
	cin>>real2>>imaginary2;
	ComplexNumbers c1(real1,imaginary1);
	ComplexNumbers c2(real2,imaginary2);
	int choice;
	cin>>choice;
	if(choice==1){
		c1.plus(c2);
		c1.print();
	}
	else if(choice==2){
		c1.multiply(c2);
		c1.print();
	}
	else{
		return 0;
	}
	
	return 0;
}
