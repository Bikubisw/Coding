#include<iostream>
using namespace std;
class comb{
	public:
		int hero;
		int vilane;
};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		comb*arr=new comb[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].hero>>arr[i].vilane;
		}
		int count=0;
		for(int i=0;i<n;i++){
			if(arr[i].hero>arr[i].vilane){
				count++;
			}
			}
	if(count==n){
		cout<<"WIN"<<endl;
	}
		else
		{
			cout<<"LOSE"<<endl;
		}
	}
		
	return 0;	
		
	}
	
