#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int prev;
cin>>prev;
int k=2;;
int curr;
bool is_dec=true;
while(k<=n){
	cin>>curr;
	if(curr==prev){
		cout<<"false"<<endl;
		break;
	}

	else if(curr>prev){
	 if(is_dec==true){
	 	is_dec=false;
	 }

	 	
	}
	else{
		if(is_dec==false){
			cout<<"false"<<endl;
			break;
		}
	}
	prev=curr;
	k++;
}
}
