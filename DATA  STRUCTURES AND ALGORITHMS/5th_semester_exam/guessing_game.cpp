#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	bool flag=true;
	int r=rand()%10+1;
	int guess,tries=0;
	cout<<"Guess my number: ";
	while(flag){
		cin>>guess;
		tries++;
		if(guess==r){
			cout<<"you have guessed the number in  "<<tries<<" tries"<<endl;
			flag=false;
			
		}
		else if(guess<r){
			cout<<"Your guess is too low,Guess again"<<endl;
		}
		else{
			cout<<"Your guess is too high,Guess again"<<endl;
		}
		
	}
	return 0;
}
