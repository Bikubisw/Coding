#include <iostream>
#include <string>
using namespace std;
int returnPermutations(string input,string output[]){
	if(input.length()==0){
		output[0]="";
		return 1;
		
	}
	string small[10000];
	int smallsize=returnPermutations(input.substr(1),small);
	int k=0;
	for(int i=0;i<smallsize;i++){
		for(int j=0;j<=small[i].length();j++){
			output[k++]=small[i].substr(0,j)+input[0]+small[i].substr(j);
		}
	}
	return k;
}
int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

