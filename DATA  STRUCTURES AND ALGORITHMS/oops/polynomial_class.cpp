#include <vector>
#include <climits>
#include <iostream>
using namespace std;
class Polynomial {
	public:
 		int *degCoeff;
    	int capasity;
    
    	Polynomial(){
    		degCoeff=new int[10];
    		capasity=10;
    		for(int i=0;i<capasity;i++){
    			degCoeff[i]=0;
			}
		}
		Polynomial(Polynomial const &p1){  //copy constructors
			this->degCoeff=new int[p1.capasity];
			for(int i=0;i<p1.capasity;i++){
				this->degCoeff[i]=p1.degCoeff[i];
			}
			this->capasity=p1.capasity;
			
		}
		void operator=(Polynomial const&p1){ // copy assignment operator
			this->degCoeff=new int[p1.capasity];
			for(int i=0;i<p1.capasity;i++){
				this->degCoeff[i]=p1.degCoeff[i];
			}
			this->capasity=p1.capasity;
			}
		void setCoefficient(int index,int element){
			 if(index>capasity){
			 	int*newarray=new int[index+2];
				for(int i=0;i<capasity;i++){
					newarray[i]=degCoeff[i];
				}
				delete[] degCoeff;
				degCoeff=newarray;
				capasity=index+2;
			 	
			 }	
			 degCoeff[index]=element;
			}
			
		
		Polynomial operator+(Polynomial const &p2){
						int max_capasity=max(this->capasity,p2.capasity);

			Polynomial ans;
			for(int i=0;i<max_capasity;i++){
				ans.setCoefficient(i,this->degCoeff[i]+p2.degCoeff[i]);
				
		}
		return ans;
		}
		Polynomial operator-(Polynomial const &p2){
			int max_capasity=max(this->capasity,p2.capasity);
			Polynomial ans;
			for(int i=0;i<max_capasity;i++){
				ans.setCoefficient(i,this->degCoeff[i]-p2.degCoeff[i]);
				
		}
		return ans;
		}
		int getCoeff(int degree) { 
        if(degree < this->capasity) { 
            return degCoeff[degree]; } 
        else { 
            return 0; }
		}
		 
		Polynomial operator*(Polynomial const &p2){
			Polynomial ans;
			for (int i=0;i<this->capasity;i++){
			
				for(int j=0;j<p2.capasity;j++){
				int termdeg = i + j; 
                int termCoeff = this->degCoeff[i] * p2.degCoeff[j]; 
                int oldCoeff = ans.getCoeff(termdeg); 
                ans.setCoefficient(termdeg, termCoeff + oldCoeff);
		}
		
		}
	return ans;

	}
	
		void print(){
			for(int i=0;i<capasity;i++){
				if(degCoeff[i]!=0){
					cout<<degCoeff[i]<<"x"<<i<<" ";								
					
						}
			}
		}
};
int main(){
	int count1,count2;
	cin>>count1;
	int *degree1=new int[count1];
	int*coeff1=new int[count1];
	for(int i=0;i<count1;i++){
		cin>>degree1[i];
	}
	for(int i=0;i<count1;i++){
		cin>>coeff1[i];
	}
	Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    cin >> count2;
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    int c;
    cin>>c;
    Polynomial result;
    switch(c)
    	{
    	case 1:
    		result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first-second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4: // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5: // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
}
    			
   	


