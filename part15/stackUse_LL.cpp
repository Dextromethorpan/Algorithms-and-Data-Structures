#include<iostream>
using namespace std;
#include "stack_LL.h"
int main(){
	stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	cout<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.top()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.S_size();
	
	
	
	
}
