#include<iostream>
using namespace std;
class Book{
	int book_no;
	char book_title[100];
	float price,totalcost;
	int total_cost(int n){
		totalcost=price*n;
		return totalcost;
	}
	public:
		void take_input(){
		cout<<"Enter book no: ";
		cin>>book_no;
		cout<<"\nEnter the title of the book :";
		cin.ignore();
		cin.getline(book_title,100);
		cout<<"\nEnter the price per copy: ";
		cin>>price;
	}
		void purchase(){
		int x;
		cout<<"Enter the number of copies: ";
		cin>>x;
		cout<<"Total cost is: "<<total_cost(x)<<endl;
	}
};
int main(){
	Book b1;
	b1.take_input();
	b1.purchase();
	return 0;
}
