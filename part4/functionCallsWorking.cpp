#include<iostream>
using namespace std;
void B (int n){
	cout<<n<<" ";
	cout<<20<<" ";
	
}
void A(int n){
	B(n-1);
	cout<<n<<" ";
	cout<<1<<" ";
	
}
int main(){
	int n =10;
	cout<<n<<" ";
	A(n);
	cout<<3<<" ";
	
	
	
}
