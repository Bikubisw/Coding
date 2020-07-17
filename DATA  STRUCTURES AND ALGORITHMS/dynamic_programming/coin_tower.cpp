#include<iostream>
#include<string>
using namespace std;
int arr[200000];
string solve(int n,int x,int y){
	arr[1]=1;
	arr[x]=1;
	arr[y]=1;
	for(int i=2;i<=n;i++){
		if(!arr[i]){
			arr[i]=arr[i-1]^1;
			if(i-x>=1){
				arr[i]=max(arr[i],arr[i-x]^1);
			}
			if(i-y>=1){
				arr[i]=max(arr[i],arr[i-y]^1);
			}
		}
	}
	if(arr[n]){
		return "Beerus";
	}
	else{
		return"Whis";
	}
}
int n,x,y;
int main()
{
	cin>>n>>x>>y;
	cout<<solve(n,x,y)<<endl;
}
