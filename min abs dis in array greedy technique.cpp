#include<bits/stdc++.h>

using namespace std;
void minAbsoluteDiff(int input[],int n);

int main()
{
	int size;
	cin>>size;
	int *input=new int[1+size];
	for(int i=0;i<size;i++)
	{
		cin>>input[i];
	}
	 minAbsoluteDiff(input,size);
	 for(int i=0;i<size;i++)
	 {
	 	cout<<input[i]<<endl;
	 }
	return 0;
	
}

void minAbsoluteDiff(int input[],int n)
{
	
	
	sort(input,input+n);
	return;

	
}
