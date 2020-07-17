#include<bits/stdc++.h>
using namespace std;
class fraction{
	private:
		int numerator;
		int denominator;
	public:
		fraction(){
			
		}
		fraction(int numerator,int denominator){
			this->numerator=numerator;
			this->denominator=denominator;
		}
		int getnumarator()const {
			return numerator;
		}
		int getdenominator() const {
			return denominator;
		}
		void setnumerator(int r) {
			numerator=r;
		}
		void setdenominator(int r){
			denominator=r;
		}
		void print() const{
			cout<<numerator<<"/"<<denominator<<endl;
			}
			void simplify(){
				int gcd=1;
				int j=min(this->numerator,this->denominator);
				for(int i=1;i<=j;i++){
					if(this->numerator%i==0&&this->denominator%i==0){
						gcd=i;
					}
				}
			cout<<gcd<<endl;
			this->numerator=this->numerator/gcd;
			this->denominator=this->denominator/gcd;	
			}
		void add(fraction const &f2){
			int lcm=this->denominator*f2.denominator;
			int x=lcm/this->denominator;
			int y=lcm/f2.denominator;
			int num=(x*this->numerator)+(y*f2.numerator);
			this->numerator=num;
			this->denominator=lcm;
			simplify();

		}
		void multiply(fraction const&f2){
			numerator=this->numerator*f2.numerator;
			denominator=this->denominator*f2.denominator;
			simplify();
		}
		
};
int main(){
	fraction f1(12,54);
	fraction f2(85,45);
	fraction const f3;
	cout<<f3.getnumarator()<<" "<<f3.getdenominator()<<endl;
	cout<<f3.setnumerator()<<endl;
	return 0;
}
