#include<iostream>
using namespace std;
int sumArray(int arr[],int n){
	//base case 
	if(n==1){
		return arr[0];
	}
	//assume 
	int smallOutput= sumArray(arr+1,n-1);
	return smallOutput+arr[0];// small work 
	
}
int main(){
	int arr[]{1,3,2,7,8};
	int n = 5;
	int sum = sumArray(arr,n);
	cout<<endl;
	cout<<"sum is: "<<sum<<endl;
	
	
	
}
