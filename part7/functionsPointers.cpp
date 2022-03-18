#include<iostream>
using namespace std;
void print(int *p){
	cout<<p<<endl;
	
	cout<<*p<<endl;
}
void increment(int *p){
	*p=*p+1;
//	p=p+1;
//	cout<<p<<endl;
}
void change(int arr[],int size){
	cout<<"in change size "<<sizeof(arr)<<endl;
	arr[0]=16;
}

int main(){
	int arr[10];
arr[0]=9;
cout<<arr[0]<<endl;
	cout<<"in main size "<<sizeof(arr)<<endl;
change(arr+3,7);
cout<<arr[3]<<endl;
//	int i =10;
//	//cout<<"i is address"<<" "<<&i<<endl;
//	cout<<"i is : "<<i<<endl;
//	int *p= &i;
////	print(p);
//increment(p);
////	cout<<p<<endl;
//cout<<"i is after call: "<<i<<endl;

	
}
