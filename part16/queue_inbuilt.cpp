#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> q1;
	// enqueue  = push 
	// dequeue = pop
	q1.push(10);// means enqueue 
	q1.push(20);
	q1.push(30);
	q1.push(40);
	q1.push(50);
	cout<<q1.front()<<endl;// 10 
	q1.pop(); // 10 is deleted  ..... pop means dequeue
	cout<<q1.front()<<endl;// 20
	int size =q1.size();
	cout<<size<<endl;
	cout<< q1.empty()<<endl;
	
	
	
	
}
