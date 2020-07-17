#include<iostream>
#include<vector>
using namespace std;
class PriorityQueue{
	vector<int> pq;
	public:
		PriorityQueue(){
			
		}
		bool isEmpty(){
			return pq.size()==0;
			}
		int getsize(){
			return pq.size();
		}
		int getMin(){
			if(isEmpty()){
				return 0;
			}
			return pq[0];
		}
		void insert(int element){
			pq.push_back(element);
			int childindex=pq.size()-1;
			while(childindex>0){
			int parentindex=(childindex-1)/2;
			if(pq[childindex]<pq[parentindex]){
				int temp=pq[childindex];
				pq[childindex]=pq[parentindex];
				pq[parentindex]=temp;
				}
			else{
				break;
			}
			childindex=parentindex;
	}
		}
		int removeMin(){
			if(isEmpty()){
				return 0;
			}
			int ans=pq[0];
			pq[0]=pq[pq.size()-1];
			pq.pop_back();
			int parentindex=0;
			int leftindex=2*parentindex+1;
			int rightindex=2*parentindex+2;
			while(leftindex<pq.size()){
				int minindex=parentindex;
				if(pq[minindex]>pq[leftindex]){
					minindex=leftindex;
				}			
				if(pq[minindex]>pq[rightindex]&& rightindex<pq.size()){
					minindex=rightindex;
				}	
				if(minindex==parentindex){
					break;
				}
				int temp=pq[minindex];
				pq[minindex]=pq[parentindex];
				pq[parentindex]=temp;
				parentindex=minindex;
				leftindex=2*parentindex+1;
				rightindex=2*parentindex+2;
			}	
		}
};
int main(){
	PriorityQueue p;
	p.insert(20);
	p.insert(100);
	p.insert(10);
	p.insert(80);
	p.insert(50);
	p.insert(0);
	p.insert(63);
	p.insert(7);
	cout<<p.getMin()<<endl;
	cout<<p.getsize()<<endl;
	while(!p.isEmpty()){
		cout<<p.removeMin()<<" ";	
	}
	cout<<endl;
}
// complete binary tree
// wo complexity 
