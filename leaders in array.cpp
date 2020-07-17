#include<iostream>
#include<climits>
using namespace std;
void Leaders(int* arr,int len)
{arr[len]=INT_MIN;
    for(int i=0;i<len;i++){
if(arr[i]>arr[i+1]){
cout<<arr[i]<<" ";
    
}
    }
    }

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}

