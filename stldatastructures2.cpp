#include<iostream>
#include<utility>
#include<set>
#include<map>

using namespace std;
int main()
{
	//pair
pair<int,char>p;
pair<int,char>p2(1,'a');
p=make_pair(2,'b');
cout<<p2.first<<" "<<p2.second<<endl;
cout<<p.first<<" "<<p.second<<endl;


//set
set<int>p;
int arr[]={1,2,3,4,5,6,1,2};
for(int i=0;i<8;i++)
{
	p.insert(arr[i]);
}
set<int>::iterator it;
for(it=p.begin();it!=p.end();it++)
{
	cout<<*it<<endl;
}
if(p.find(6)==p.end())
{
	cout<<"elements not found"<<endl; 
}
else
{
	cout<<"elements found"<<endl;
}

//map
int arr[]={1,2,3,4,5,6,1,2};
map<int,int> m;
for(int i=0;i<7;i++)
{
	m[arr[i]]=m[arr[i]]+1;
	
}
map<int,int>::iterator it;
for(it=m.begin();it!=m.end();it++)
{ cout<<it->first<<":"<<it->second<<endl;
}






 } 
