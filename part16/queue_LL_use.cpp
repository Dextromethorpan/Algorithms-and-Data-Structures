#include<iostream>
using namespace std; 
#include"queue_LL.cpp"
int main(){
	 queue<int> q1;
	 q1.enqueue(10);
	 q1.enqueue(20);
	 q1.enqueue(30);
	 q1.enqueue(40);
	  q1.enqueue(50);
	 q1.enqueue(60);
	 cout<<q1.dequeue()<<endl;
	  cout<<q1.dequeue()<<endl;
	  cout<<q1.size_Q()<<endl;
	  cout<<q1.IsEmpty()<<endl;
	  cout<<q1.front_Q()<<endl;
	
	
}
