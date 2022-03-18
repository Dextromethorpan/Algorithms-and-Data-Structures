template<typename T>
class Node{
	public :
	T data;
	Node<T> *next;
	Node(T data){
		this->data= data;
		next = NULL;
		
		
	}
	
	
	
};
template<typename T>
class queue{
	Node<T> *front ;
	Node<T> *rear;
	int size;
	public :
	queue(){
		front =NULL;
		rear= NULL;
		size=0;
		
	}
	
	int size_Q(){
		return size;
	}
	
	bool IsEmpty(){
		return size==0;//if size is 0 then return true else return false 
		
	}
	
	enqueue(T n){
		Node<T> *newNode = new Node<T>(n);
		if(front==NULL && rear==NULL){
			front = newNode ;
			rear=newNode;
		}
		else{
			rear->next= newNode;
		   rear = newNode;
		
			
		}
		size++;
	}
	
   T dequeue (){
   	 if(IsEmpty()){
   	 	cout<<"queue is empty";
   	 	return 0;
		}
		else{
		
		T temp;
		temp= front->data;
		Node<T> *t= front;
		front = front->next;
		delete t;
		size--;
		return temp;
	}
}
	T front_Q(){
		 if(IsEmpty()){
   	 	cout<<"queue is empty";
   	 	return 0;
		}
		else{
			return front->data;
			
		}
	}
		
		
	
		
	
	
	
	
	
	
	
	
	
	
};
