#include<iostream>
using namespace std;
int binarysearch(int input[],int size,int element)
{
	return binaryhelper(input,0,size-1,element);
}
int binaryhelper(input[],int low,int end,int element)
{
	if(low>end)
	{
		return -1;
		
	}
	int mid=(low+end)/2;
	if(element==input[mid])
  {
    return mid;
    
  }
  else if(element<input[mid])
  {
return binaryhelper(input,low,mid-1,element);
}
  else{
    return binaryhelper(input,mid+1,end,element);
  }
}
int main()
{
	int size;
	cin>>size
	int input[size];
	for(int i=0;i<size;i++)
	{
		cin>>input[i];
		
	}
	int element;
	cin>>element;
	int index=binarysearch(input,size,element);
	cout<<index<<endl;
	
}
