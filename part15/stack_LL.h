
template<typename T>
  class Node {
	public:
	T data;
	Node<T> *next;
	
	Node(int data){
		this->data= data;
		next=NULL;
		
		
	}
	
	
};
template<typename T>
class stack {
	Node<T> *head;
	int size;
	
	public:
		stack(){// Constructor
			size= 0;
			head=NULL;
			
		}
		
		int  S_size(){
			return size;
			
		}
		
	  bool	isEmpty(){
			return size==0;// if size equal to 0 return true else return false 
			
		}
		
		void push(T data){
		 Node<T> *newNode = new Node<T>(data);
		 newNode->next=head;
		 head= newNode;
		 size++;		
		}
		
		
		T pop(){ // say T is int 
			if(isEmpty()){
				cout<<"stack is empty";
				return 0;
				
			}
			else{
				int temp = head->data;
				Node<T> *t = head;
				head = head->next;
				size--;
				delete t;
				return temp;
				
				
			}
			
			
		}
	
	 T top(){
	 	if(isEmpty()){
				cout<<"stack is empty";
				return 0;
				
			}
			else{
				return head->data;
				
			}
	 	
	 }
	
	
	
	
	
};
