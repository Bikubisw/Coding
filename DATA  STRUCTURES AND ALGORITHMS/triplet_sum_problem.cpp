#include <iostream>
using namespace std;
void FindTriplet(int *input,int n,int x){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(input[i]+input[j]+input[k]==x){
					if(input[i]<=input[j]&&input[i]<=input[k]){
						cout<<input[i]<<" ";
					
					if(input[j]<input[k]){
						cout<<input[j]<<" "<<input[k]<<endl;
					}
					else{
						cout<<input[k]<<" "<<input[j]<<endl;
					}
				}
				
					else if(input[j]<=input[i]&&input[j]<=input[k]){
						cout<<input[j]<<" ";					
					
					if(input[i]<input[k]){
						cout<<input[i]<<" "<<input[k]<<endl;
					}
					else{
						cout<<input[k]<<" "<<input[i]<<endl;
					}
				}
					else{
						cout<<input[k]<<" ";
						if(input[i]<input[j]){
							cout<<input[i]<<" "<<input[j]<<endl;
						}
						else{
							cout<<input[j]<<" "<<input[i]<<endl;
						}
					}
				}
				
			}
		}
	}
	
}
int main() {
	int size;
	int x;
	cin>>size;
	int *input=new int[1+size];	
	for(int i=0;i<size;i++){
	cin>>input[i];
	}
	cin>>x;
	FindTriplet(input,size,x);
	return 0;
}


