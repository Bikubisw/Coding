#include<iostream>
#include<cstring>
using namespace std;
bool isPermutation(char input1[],char input2[]){
	int l1=strlen(input1);
	int l2=strlen(input2);
	if(l1!=l2){
		return false;
	}
	int *arr=new int[256];
	for(int i=0;i<256;i++){
		arr[i]=0;
	}

	for(int i=0;input1[i]!='\0';i++){
		int index=input1[i];
		arr[index]++;
	}
	for(int j=0;input2[j]!='\0';j++){
		int index=input2[j];
		arr[index]--;
	}
	for(int i=0;i<256;i++){
		if(arr[i]!=0){
			return false;
		}
	}
	return true;
	
}
int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
