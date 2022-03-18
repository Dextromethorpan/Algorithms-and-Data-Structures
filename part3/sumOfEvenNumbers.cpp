#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the value of number"<<endl;
	cin>>num;
	int i =1;
	int sum =0;
	while(i<=num){
		if(i%2==0){
		
	sum = sum + i;
	
	}
	i =i+1;
		
		
	}
	cout<<"sum is :"<<sum;
}
