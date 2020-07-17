#include<iostream>
using namespace std;


int main(){
int start,end,step;
    cin>>start>>end>>step;
    int curr=start;
    while(curr<=end){

  int ferhenhite=(5.0/9)*(curr-32);
        cout<<curr<<"\t"<<ferhenhite<<endl;
        curr=curr+step;
    }
}



