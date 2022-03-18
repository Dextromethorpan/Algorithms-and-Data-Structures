#include<iostream>
using namespace std;
#include "queue.h"
int main(){
	queue<int> q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	q1.enqueue(6);
	q1.enqueue(7);
	q1.enqueue(8);
	cout<<q1.dequeue()<<endl;
	cout<<q1.dequeue()<<endl;
	cout<<q1.size_Q()<<endl;
	cout<<q1.IsEmpty()<<endl;
	
	
	
}
