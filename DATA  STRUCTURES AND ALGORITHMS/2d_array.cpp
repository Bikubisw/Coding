#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int arr[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Row wise:"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Column wise:"<<endl;
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	
		return 0;
}
