#include<bits/stdc++.h>
using namespace std;
struct item
{int value,weight;
};
bool compare(item a, item b)
{
	double value1=((double)a.value)/(a.weight);
	double value2=((double)b.value)/(b.weight);
	return (value1>value2);
	
	}
	double knapsack(item arr[],int w,int n)
	{
		sort(arr,arr+n,compare);
		int currw=0;
		double fvalue=0;
		for(int i=0;i<n;i++)
		{
			if(currw+arr[i].weight<=w)
			{
				currw=currw+arr[i].weight;
				fvalue=fvalue+arr[i].value;
			}
			else
			{
				int rw=w-currw;
				fvalue+=arr[i].value*((double)rw/arr[i].weight);
				break;
			}
		}
		return fvalue;
	}
int main()
{
	int w=70;
	item arr[]={{60,20},{70,15},{80,40}};
	cout<<"the maximum value is"<<knapsack(arr,w,3);
	
	
	
	return 0;
}
