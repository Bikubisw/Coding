#include<iostream>
#include<cstring>
using namespace std;
bool checksequenece(char large[] , char*small) {
	int m=strlen(small);
	int n=strlen(large);
	int j=0;
	for(int i=0;i<n&&j<m;i++){
		if(small[j]==large[i]){
			j++;
		}
	}
	if(j==m){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}

