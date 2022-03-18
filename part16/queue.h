template<typename T>
class queue{
	public:
	T *data;
	int front;
	int rear;
	int size;
	int capacity ;
	
	queue(){
		data = new T[5];
		front = -1;
		rear=-1;
		size= 0;
		capacity = 5;		
	}

bool IsEmpty(){
	return size==0;//if size = 0 then return true else return false 
}

int size_Q(){
	return size;
	
	
}

void enqueue(T n){
	if(size==capacity){
//		cout<<"Queue is full";
//		return ;
		// will come and resize it 
	 T 	*newData = new T[2*capacity];
	 int index =0;
	 for(int i =front; i< capacity; i++){
	 	
	 	newData[index]= data[i];
	 	index++;
	 	}
	  for(int i=0;i<front;i++){
	  	newData[index]= data[i];
	  	index++;
	  }
	  delete [] data ;
	  data = newData;
	  capacity= capacity* 2;
	  front =0;
	  rear = index -1;
	  
		
	}
	
	if(size==0){
		front =0;
	}
	rear = (rear+1)%(capacity);
	data[rear]= n;
	size++;	
}

T dequeue(){
	if(IsEmpty()){
		cout<<"Queue is empty";
		return 0;
	}
	int temp = data[front];
	front = (front +1)%capacity;// there is a trick on this line as well 
	size--;
	if( size==0){
		front = -1;
		rear= -1;
	}
	
	return temp ;	
}

T front_Q(){
	if(IsEmpty()){
		cout<<"Queue is empty";
		return 0;
	}
	return data[front];
	
	
}


	
	
	
};
