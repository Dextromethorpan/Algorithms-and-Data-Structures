#include<iostream>
using namespace std;
void main(){
	int a[100];
	cout<<"Enter n "<<endl;
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	int sum =0;
	for(int i =0;i<n;i++){
		sum = sum+ a[i];
	}
	cout<<"Sum is:"<<" "<<sum;
//	return 0;
}
