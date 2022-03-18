#include<iostream>
using namespace std;
//void fun(int const &j){
//	int a =j+10;
//	//j++;
//	cout<<"a "<<a<<endl;
//}
int main(){
	  int  const i=10;
	int const   &k=i;
	
	int const j = 12;
//	int const *p =&j;
//	p=&i;
	int const * const p=&i;
	//p=&j;
 // *p=*p+1;
//	i=20;
	//k++;
	cout<<i<<endl;
//	i++;
//	fun(i);
//	cout<<k<<endl;

	
}
