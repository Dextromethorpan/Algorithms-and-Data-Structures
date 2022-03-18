template<typename T>
class stack{
	T *data;
	int capacity;// the capacity of our stack
	int nextIndex;
	public :
	stack(){
		data = new T[5];
		capacity= 5;
		nextIndex=0;
		
	}
	
	int size(){
		return nextIndex;
	}
	 
	 bool isEmpty(){
	 	if(nextIndex==0){
	 		return true;
		 }
	 	else{
	 		return false;
		 }
	 }
	 
	 void push(T element){
	 	if(nextIndex==capacity){
	 		T *newData= new T[2*capacity];
	 		for(int i=0;i<capacity;i++){
	 			newData[i]= data[i];
			 }
			 //int *temp=data;
			 delete [] data;//we just deleted the previous stack
			 data = newData;
			 capacity = capacity*2;
	 		
//	 		cout<<"stack is full";
//	 		return ;
	 	// we will come here to resize the structure 	
		 }
	 	data[nextIndex]=element;//
	 	nextIndex++;	
	 }
	 
	 T pop(){
	 	if(isEmpty()){
	 		cout<<"your stack is empty";
	 		return 0;
		 }
		 
		 else{
		 	nextIndex--;// nextIndex = nextIndex -1;
		 	T temp;
		 	temp= data[nextIndex];
		 	return temp;
		 //	nextIndex--;//no 
		 	
		 }
	 	
	 }
	 
	 T top(){
	 	if(isEmpty()){
	 		cout<<"your stack is empty";
	 		return 0;
		 }
		 
		 else{
		 //	nextIndex--;
		 	int temp;
		 	temp= data[nextIndex-1];
		 	return temp;
	 	
	 	
	 }
}
};

