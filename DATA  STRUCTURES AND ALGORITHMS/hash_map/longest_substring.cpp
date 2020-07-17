#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int longestsubstring(string str){
    int maxlen=0;
    int st=0; // current start of my string
    unordered_map<char,int> ourmap;
    ourmap[str[0]]=0;
    for(int i=1;i<str.length();i++){
        if(ourmap.count(str[i])==0){
            ourmap[str[i]]=i;
        }
        else{
            if(ourmap[str[i]]>=st){
                int currentlength=i-st;
                if(maxlen<currentlength){
                    maxlen=currentlength;
                }
                st=ourmap[str[i]]+1;
            }
            ourmap[str[i]]=i;
        }
    }
    if(maxlen==0){
    	return str.length();
			}
			else{
				return maxlen;
			}
}
int main()
{
    string s;
    cin>>s;
    cout<<longestsubstring(s)<<endl;
    return 0;
}
