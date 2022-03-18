#include<iostream>
using namespace std;
void increment(int b[],int n){
	n++;
	b[0]=100;
}
int main(){
	int n =10;
	
	int a[5]={9,2,3,4,1};
	cout<<"before calling func"<<endl;
	for(int i =0;i<5;i++){
 	cout<<a[i]<<endl;
 }
 increment(a,n);
 cout<<"after calling func"<<endl;
 cout<<"N: "<<n<<endl;
 for(int i =0;i<5;i++){
 	cout<<a[i]<<endl;
 
 
	
}}
