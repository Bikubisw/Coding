#include<iostream>
#include<string>
using namespace std;
int lcs_helper(string s,string t,int** output){
	int m=s.size();
	int n=t.size();
	if(s.size()==0||t.size()==0){
		return 0;
	}
	if(output[m][n]!=-1){
		return output[m][n];
	}
	int ans;
	if(s[0]==t[0]){
	ans=1+lcs_helper(s.substr(1),t.substr(1),output);
	}
	else{
	int x=lcs_helper(s.substr(1),t,output);
	int y=lcs_helper(s,t.substr(1),output);
	int z=lcs_helper(s.substr(1),t.substr(1),output);
	ans=max(x,max(y,z));
}
	output[m][n]=ans;
	return ans;
}
int lcs(string s,string t){
	int m=s.size();
	int n=t.size();
	int **output=new int*[m+1];
	for(int i=0;i<m+1;i++){
		output[i]=new int[n+1];
		for(int j=0;j<n+1;j++){
			output[i][j]=-1;
		}
	}
	return lcs_helper(s,t,output);
}

int main(){
	string s,t;
	cin>>s>>t;
	cout<<lcs(s,t)<<endl;
	return 0;
}
