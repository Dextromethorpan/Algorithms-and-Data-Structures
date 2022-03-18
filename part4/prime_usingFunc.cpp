#include<iostream>
using namespace std;
bool isprime(int n){
	int d= 2;
	while(d<n){
		if(n%d==0){
			return false;
		}
		d++;
	}
	return true;
	
}

int main(){
	int i =2;
	int n=20;
	while(i<=n){
		bool  a1= isprime(i);
		cout<<i <<":"<<a1<<endl;
		i++;
		
	}
//	bool  a1= isprime(3);
//	cout<<a1<<endl;
//	bool  a2= isprime(5);
//	cout<<a2<<endl;
//	bool  a3= isprime(6);
//	cout<<a3<<endl;
//	bool a4= isprime(8);
//	cout<<a4<<endl;
	
	
}
