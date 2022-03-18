#include<iostream>
using namespace std; 
#include<stack>// this will allow to use all inbuilt func of stack
int main(){
	stack<int> s1;
	s1.push(30);
	s1.push(40);
	cout<<s1.top()<<endl;
     s1.pop();// it has already poped the top value ;
     cout<<s1.size()<<endl;
     cout<<s1.empty()<<endl;
     	cout<<s1.top()<<endl;
     
	
	
	
}
