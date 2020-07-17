#include<iostream>
using namespace std;
int main(){
//int a=10;
//cout<<++a<<endl;
//cout<<a++<<endl;
//  int x = 15;
//    int y = x++;
//    int z = ++x;
//    cout << y << " " << z;
//    int x = 10;
//    int y = 20;
//    if(x++ > 10 && ++y > 20 ){
//    cout << "Inside if ";
//    } else{
//    cout << "Inside else ";
//    }
//    cout << x <<" "<< y;	
for(int i = 1; i < 5; i = i + 1){
    cout << i << " ";
    i = i - 1;
}
return 0;	
}
