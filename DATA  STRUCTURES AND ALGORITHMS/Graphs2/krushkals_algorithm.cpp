#include<iostream>
#include<algorithm>
using namespace std;
class Edge{
	public:
		int source;
		int destination;
		int weight;
		
};
bool compare(Edge e1,Edge e2){
	return e1.weight<e2.weight;
}
int findparent(int i,int *parent){
	if(parent[i]==i){
		return i;
	}
	return findparent(parent[i],parent);
}
 void krushkals(Edge* input,int n,int e){
 	// sort the input array in ascending order;
 	sort(input,input+e,compare);
 	Edge* output=new Edge[n-1];
 	int *parent=new int[n];
 	for(int i=0;i<n;i++){
 		parent[i]=i;
	 }
 	int count=0;
 	int i=0;
 	while(count!=n-1){
 		Edge currentedge=input[i];
 		int sourceparent=findparent(currentedge.source,parent);
 		int destparent=findparent(currentedge.destination,parent);
 		if(sourceparent!=destparent){
 			output[count]=currentedge;
 			count++;
 			parent[sourceparent]=destparent;
					 }
		 i++;
	 }
 	for(int i=0;i<n-1;i++){
 		if(output[i].source<output[i].destination){
 		cout<<output[i].source<<" "<<output[i].destination<<" "<<output[i].weight<<endl;
	 }
	 else{
 		cout<<output[i].destination<<" "<<output[i].source<<" "<<output[i].weight<<endl;
	 	
	 }
}
delete []output;
delete[] parent;	 
 	
 }
int main(){
	int n,e;
	cin>>n>>e;
	Edge* input=new Edge[e];
	for(int i=0;i<e;i++){
		int s,d,w;
		cin>>s>>d>>w;
		input[i].source=s;
		input[i].destination=d;
		input[i].weight=w;
		
	}
	krushkals(input,n,e);
	delete []input;
	return 0;
	
}
