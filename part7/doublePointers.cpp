//double pointers
#include<iostream>
using namespace std;
void increment(int **p){
	**p=**p+1;
}
int main(){
	int i =11;
	int *p=&i;
	cout<<i<<endl;
	*p=*p+1;
	cout<<i<<endl;
	cout<<*p<<endl;
	int **p2=&p;
	cout<<"address of i : "<<&i;
	cout<<endl;
	cout<<p2<<endl;
	cout<<*p2<<endl;
	cout<<**p2<<endl;
	increment(p2);
	cout<<**p2<<endl;
	cout<<i<<endl;
	
}
