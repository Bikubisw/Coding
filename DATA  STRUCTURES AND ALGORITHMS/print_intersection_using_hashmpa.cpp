#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
void intersection(int input1[],int input2[],int size1,int size2){
	unordered_map<int,int> map1;
	for(int i=0;i<size1;i++){
		map1[input1[i]]++;
	}
	for(int i=0;i<size2;i++){
		if(map1.count(input2[i])>0){
			map1[input2[i]]--;
			cout<<input2[i]<<endl;
		}
	}
	
}
int main(){
		int size1,size2;
	cin>>size1;
	int *input1=new int[1+size1];	
	
	for(int i=0;i<size1;i++)
		cin>>input1[i];

	cin>>size2;
	int *input2=new int[1+size2];	
	
	for(int i=0;i<size2;i++)
		cin>>input2[i];
		intersection(input1,input2,size1,size2);
	
}
