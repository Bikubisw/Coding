#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char c;
	cin>>c;
	int sum=0;
	int pro=1;
	if(c=='1'){
		for(int i=1;i<=n;i++)
		{
			sum=sum+i;
		}
		cout<<sum<<endl;
	}
	else if(c=='2'){
		for (int i=1;i<=n;i++){
			pro*=i;
		}
		cout<<pro<<endl;
	}
	else{
		cout<<-1<<endl;
	}
	return 0;
}
