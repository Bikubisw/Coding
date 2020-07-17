#include<iostream>
using namespace std;
int main(){
	/*const int i=10;
	int j=12;
	const int &k=j;
	
	j++;
	cout<<k<<endl;
	return 0;*/
	int const i=10;
	int const *p=&i;
	int n=12;
	int const*k=&n;
	cout<<*k<<endl;
	n++;
	cout<<*k<<endl;
}
