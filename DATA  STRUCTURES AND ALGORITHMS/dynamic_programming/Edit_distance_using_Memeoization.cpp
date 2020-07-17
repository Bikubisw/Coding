#include<iostream>
#include<string>
using namespace std;
int editdistancehelper(string s,string t,int**arr){
	int m=s.size();
	int n=t.size();
	if(m==0 || n==0){
		return max(m,n);
	}
	if(arr[m][n]!=-1){
		return arr[m][n];
	}
	int ans;
	if(s[0]==t[0]){
		ans= editdistancehelper(s.substr(1),t.substr(1),arr);
	}
	else{
		// insert
		int x=1+editdistancehelper(s.substr(1),t,arr);
		// delete
		int y=1+editdistancehelper(s,t.substr(1),arr);
		// replace
		int z=1+editdistancehelper(s.substr(1),t.substr(1),arr);
		ans=min(x,min(y,z));
	}
	arr[m][n]=ans;
	return ans;
}
int editdistance(string s,string t){
	int m=s.size();
	int n=t.size();
	int** arr=new int*[m+1];
	for(int i=0;i<m+1;i++){
		arr[i]=new int[n+1];
		for(int j=0;j<n+1;j++){
			arr[i][j]=-1;
		}
	}
	return editdistancehelper(s,t,arr);
	
}
int main(){
	string s;
	string t;
	cin>>s>>t;
	cout<<editdistance(s,t)<<endl;
	return 0;
}
