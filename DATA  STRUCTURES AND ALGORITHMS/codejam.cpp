#include<bits/stdc++.h>
using namespace std;
void calculate(int**output,int n){
	int dsum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				dsum+=output[i][j];
			}
		}
	}
	unordered_map<int,int>ourmap;
	int row=0;
	int col=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		ourmap[output[i][j]]++;
		}
		for(int j=0;j<n;j++){
			if(ourmap[output[i][j]]>1){
				row++;
				break;
			}
		}
		ourmap.erase(ourmap.begin(),ourmap.end());
    }
    	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		ourmap[output[j][i]]++;
		}
		for(int j=0;j<n;j++){
			if(ourmap[output[j][i]]>1){
				col++;
				break;
			}
		}
		ourmap.erase(ourmap.begin(),ourmap.end());
    }
		
	cout<<" "<<dsum<<" "<<row<<" "<<col<<endl;
	
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
int cas=1;
while(t--){
	int n;
	cin>>n;
	int**output=new int*[n];
	for(int i=0;i<n;i++){
		output[i]=new int[n];
		for(int j=0;j<n;j++){
			cin>>output[i][j];
		}
	}
	
	cout<<"Case"<<" "<<"#"<<cas<<":";
	cas++;
	calculate(output,n);
}

}
