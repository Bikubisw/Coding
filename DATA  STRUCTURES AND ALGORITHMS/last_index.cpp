#include<iostream>
using namespace std;
int lastIndex(int*input,int n,int x){
  	 if(n==0)
  {return -1 ;
}

    int smallindex=lastIndex(input+1,n-1,x);
    if(smallindex!=-1)
    {
    	return smallindex+1;
	}
	if(input[0]==x)
	{return 0;
	}
	else{
		return -1;
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
