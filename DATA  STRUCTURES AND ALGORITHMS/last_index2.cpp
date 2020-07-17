#include<iostream>
using namespace std;
int lastIndex(int*input,int n,int x){
  	 if(n==0)
  {return -1 ;
}
if(input[0]==x){
	return 0;
}

    int smallindex=lastIndex(input,n-1,x);
    if(smallindex==-1)
    {
    	return -1;
	}
	else{
		return 1+smallindex;
		
	}

}
int main(){
	int n;
	cin >> n;
    int *input = new int[n];
    for(int i= 0; i < n; i++) {
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout <<lastIndex(input,n,x)<< endl;
}
