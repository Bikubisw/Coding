#include <iostream>
#include<cstring>
#include<math.h>
using namespace std;
int stringToNumber(char input[]) {
    int j=strlen(input)-1;
    int ans=0;
    for(int i=0;input[i]!='\0';i++){
     int b=input[i]-'0';
     ans=ans+b*pow(10,j);
    j--;
}
 return ans;
}
int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

