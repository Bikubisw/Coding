#include<iostream>
using namespace std;
template <typename T>
class Node {
    public :
    T data;
    Node<T> *next;
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};
template <typename T>
class Stack{
	Node<T> *head;
	int size;
	public:
		stack(){
		head=NULL;
		size=0;
			}
		T getsize(){
			return size;
		}
		bool is_empty(){
			return size==0;
		}
		void push(T element){
			Node<T>*newnode=new Node<T>(element);
			newnode->next=head;
			head=newnode;
			size++;
		}
		T pop(){
			if(is_empty()){
				return 0;
			}
			T ans=head->data;
			Node<T>*temp=head;
			head=head->next;
			delete temp;
			size--;
			return ans;
			
		}		
		T top(){
			if(is_empty()){
				return 0;
			}
			return head->data;
			
		}		
};
int main() {
        
        Stack<int> st;
        int choice;
        cin >> choice;
        int input;
        while (choice !=-1) {
            if(choice == 1) {
                cin >> input;
                st.push(input);
            }
            else if(choice == 2) {
                int ans = st.pop();
                if(ans != 0) {
                    cout << ans << endl;
                }
                else {
                    cout << "-1" << endl;
                }
            }
            else if(choice == 3) {
                int ans = st.top();
                if(ans != 0) {
                    cout << ans << endl;
                }
                else {
                    cout << "-1" << endl;
                }
            }
            else if(choice == 4) {
                cout << st.getsize() << endl;
            }
            else if(choice == 5) {
			if(st.is_empty()){
            cout << "true" << endl;
		}else{
			cout << "false" << endl;
		}
            }
            cin >> choice;
        }
    
    }
