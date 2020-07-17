#include <iostream>
using namespace std;
int find(int arr[],int n,int k,int r)
{
    for(int i=0,j=1;i<n;i++,j++)
    {
    	
        if(arr[i]%(k*j)==0)
        {
            return 0;
        }
        else
        { return n-j; 
    }
}
}

int main() {
	int n,k,r;
	cin>>n>>k>>r;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int ans=find(arr,n,k,r);
	cout<<ans<<endl;
	
	return 0;
}

