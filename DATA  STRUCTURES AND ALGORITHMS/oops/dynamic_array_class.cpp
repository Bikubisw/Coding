#include<iostream>
using namespace std;
class dynamicarray{
	int *data;
	int nextindex;
	int capasity;
	public:
		dynamicarray(){
			data=new int[5];
			nextindex=0;
			capasity=5;
		}
		dynamicarray(dynamicarray const& d){
			//this->data=d.data; shallow copy
			this->data=new int[d.capasity];
			for(int i=0;i<nextindex;i++){
				this->data[i]=d.data[i];
				}
			this->nextindex=d.nextindex;
			this->capasity=d.capasity;
		}
		void operator= (dynamicarray const&d){
		
			//this->data=d.data; shallow copy
			this->data=new int[d.capasity];
			for(int i=0;i<nextindex;i++){
				this->data[i]=d.data[i];
		}
			this->nextindex=d.nextindex;
			this->capasity=d.capasity;
		
		}
		void add(int element){
			if(nextindex==capasity){
			int *newarray=new int[2*capasity];
			for(int i=0;i<capasity;i++){
				newarray[i]=data[i];
			}
			delete[]data;
			data=newarray;
			capasity=2*capasity;	
			}
			data[nextindex]=element;
			nextindex++;
		}
		int getdata(int i){
			if(i<nextindex){
				return data[i];
			}
			else{
				return -1;
			}
		}
		void addelement(int i,int element){
			if(i<nextindex){
				data[i]=element;
			}
			else if(nextindex==i){
				add(element);
			}
			else{
				return;
			}
			
		}
		void print(){
			for(int i=0;i<nextindex;i++){
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
		
		
};
int main(){
	dynamicarray d1;
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);
	d1.print();
	dynamicarray d2(d1);//copy constructor
	dynamicarray d3;
	d3=d1;
	d1.addelement(0,100);
	d2.print();
	d3.print();
	return 0;
}
