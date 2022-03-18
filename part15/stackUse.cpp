#include<iostream>
using namespace std;
#include "stack.h"

int main()
{
	stack<int> s1;

	s1.push(3);
	s1.push(4);
	s1.push(33);
	s1.push(333);
	s1.push(23);
	s1.push(31);
	s1.push(12);
	cout<<endl;
	cout<<s1.pop();
	cout<<endl;
	cout<<s1.size();
	cout<<endl;
	cout<<s1.isEmpty();
	
	
	return 0;
}

