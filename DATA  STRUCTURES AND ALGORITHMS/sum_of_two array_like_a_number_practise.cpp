#include <iostream>
#include<cmath>
using namespace std;
void sumOfTwoArrays(int *input1,int size1,int*input2,int size2,int*output){
	int carry=0;
	int i=size1-1;
	int j=size2-1;
	int k=max(size1,size2);
	while(k<=0){
		if(i>=0&&j>=0){
			output[k]=input1[i]+input2[j]+carry;
			if(output[k]>9){
				carry=1;
				output[k]=output[k]%10;
			}
			else{
				carry=0;
			}
			i--;
			j--;
			k--;
			
			
			
		}
		else if(i<0&&j>=0){
			output[k]=input2[j]+carry;
			if(output[k]>9){
				carry=1;
				output[k]=output[k]%10;
			}
			else{
				carry=0;
			}
			k--;
			j--;
		}
		else if(j<0&&i>=0){
						output[k]=input1[i]+carry;
			if(output[k]>9){
				carry=1;
				output[k]=output[k]%10;
			}
			else{
				carry=0;
			}
			k--;
			i--;
		}
		else{
			output[k]=carry;
			k--;
		}
		
	}
	
	
}
int main(){
	int size1,size2;
	cin>>size1;
	int * input1=new int[1+size1];
	
	for(int i=0;i<size1;i++)
		cin>>input1[i];

   	 cin>>size2;
	 int * input2=new int[1+size2];
	
	for(int i=0;i<size2;i++)
		cin>>input2[i];
	
	int *output=new int[1+max(size1,size2)];
	int outsize = 1+max(size1,size2);
	sumOfTwoArrays(input1,size1,input2,size2,output);	
	
	for(int i=0;i<outsize;i++)
		cout<<output[i]<<" ";


}

