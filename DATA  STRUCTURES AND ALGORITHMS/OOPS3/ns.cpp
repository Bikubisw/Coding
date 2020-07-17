#include <bits/stdc++.h>
using namespace std;
void reverseWords(char *input,int i,int j){
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}
void reverseStringWordWise (char* input){
    int i=0;
    int j=strlen(input)-1;
    while (i<j)
    {
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    int start=0,end=0;
    for(int i=0;i<strlen(input);i++){
        if(input[i]==' '){
            end=i-1;
            reverseWords(input,start,end);
            start = i + 1;
            end = i + 1;
        }
    }
    end=i-1;
    reverseWords(input, start, end);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}

