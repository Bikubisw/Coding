#include<bits/stdc++.h>
using namespace std;
struct job{
	int start,end,profit;
};
bool compare(job a,job b)
{
	return a.end<b.end;

}
int binarysearch(job Jobs[],int index){
int low=0,high=index-1;
    while(low<=high)
    {
    	int mid=(low+high)/2;
        if(Jobs[mid].end<=Jobs[index].start)
        {
            if(Jobs[mid+1].end<=Jobs[index].start)
            {
			low=mid+1;
            }
            else
            {
			 return mid;
            }

        }
        else
        {
            high=mid-1;
      }
        

}
return -1;

}
int findmaxprofit(job arr[],int n)
{
	sort(arr,arr+n,compare);
	int *dp=new int[n];
	dp[0]=arr[0].profit;
	for(int i=1;i<n;i++)
	{
		int  including=arr[i].profit;
		int latestconflict=binarysearch(arr,i);
	  if(latestconflict!=-1)
		{
			including=including+dp[latestconflict];
		}
		dp[i]=max(including,dp[i-1]);
	}
	int ans=dp[n-1];
	delete[]dp;
	return ans;
	
}
int main()
{
	int n;
	cin>>n;
	job arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].start;
		cin>>arr[i].end;
		cin>>arr[i].profit;
		
	}
cout<<findmaxprofit(arr,n)<<endl;

	
	
	return 0;
}
