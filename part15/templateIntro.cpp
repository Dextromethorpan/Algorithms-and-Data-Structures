#include<iostream>
using namespace std;
template<typename T>
T find_max(T x,T y){
	if(x>y){
		return x;
	}
	else {
		return y;
	}
	
}


int main(){
	cout<<find_max<int>(5,7)<<endl;
	cout<<find_max<char>('a','b')<<endl;
	cout<<find_max<string>("fad","fbd")<<endl;
	
	
}
