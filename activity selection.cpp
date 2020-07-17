#include<bits/stdc++.h>
using namespace std;
struct activity{
	int start,end;
};
bool compare(activity s1,activity s2)
{
	return s1.end<s2.end;
}
int printmaxact(activity arr[],int n)
{
	sort(arr,arr+n,compare);
	int i=0;
	int count=1;
	for(int j=1;j<n;j++){
		if(arr[j].start>=arr[i].end)
		{
			i=j;
			count++;
		}
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	activity arr[100];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].start;
		cin>>arr[i].end;
	}
	int ans=printmaxact(arr,n);
	cout<<ans<<endl;
	return 0;
	
}
