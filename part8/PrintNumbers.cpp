#include<iostream>
using namespace std;
void printNumber(int n ){
	if(n==1){//base case
		cout<<n<<endl;
		return ;
	}
	printNumber(n-1);//assuming 
	cout<<n<<endl;
	
	
}
void printNumber2(int n ){
	if(n==1){//base case
		cout<<n<<endl;
		return ;
	}
	
	cout<<n<<endl;
	printNumber2(n-1);//assuming 
	
	
}
int main(){
	cout<<"Enter n "<<endl;
	int n;
	cin>>n;
	printNumber(n);
	cout<<endl;
	printNumber2(n);
	
}
