#include <iostream>
#include <string>
using namespace std;
string getstring(int d){
    if(d==2){
        return "abc";
    }
    if(d==3){
        return "def";
    }
    if(d==4){
        return "ghi";
    }
    if(d==5){
      return "jkl";  
    }
    if(d==6){
        return "mno";
    }
    if(d=7){
        return "pqrs";
    }
    if(d==8){
        return "tuv";
    }
    if(d==9){
        return "wxyz";
    }
    return " ";
}
int keypad(int num[],int n,string output[]){
    if(n==0){
        output[0]="";
        return 1;
    }
    int lastdigit=num[n-1];
    int smalloutputsize=keypad(num,n-1,output);
    string options=getstring(lastdigit);
    for(int i=0;i<options.length()-1;i++){
        for(int j=0;j<smalloutputsize;j++){
            output[j+(i+1)*smalloutputsize]=output[j];
        }
    }
    int k=0;
    for(int i=0;i<options.length();i++){
        for(int j=0;j<smalloutputsize;j++){
            output[k]=output[k]+options[i];
            k++;
        }
    }
    return smalloutputsize*options.length();
}

int main(){
    int n;
    cin >>n;
    int* num=new int[n];
    for(int i=0;i<n;i++){
    	cin>>num[i];
	}
    string output[10000];
    int count = keypad(num,n,output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

