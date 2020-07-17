#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
    	int k=1;
    	while(k<=n-i)
    	{
    		cout<<" ";
    		k++;
		}
    	int j=i;
        
        while(j<=(2*i-1))
        {
            cout<<j;
            j=j+1;
            
}
        cout<<endl;
        i++;
    
    
    
    }
  
}
//#include<iostream>
//using namespace std;


/*int main(){
	int n;
	cin>>n;
	int i=1;
	int val=1;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<val<<" ";
			j++;
			val++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}*/





