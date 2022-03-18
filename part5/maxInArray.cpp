#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int min= INT_MAX;
	for(int i =0;i<n;i++){
	if(min>arr[i]){
		min= arr[i];
		
	}
		
	}
		cout<<"min: "<<min<<endl;
	
//	int max = INT_MIN;
//	for(int i =0;i<n;i++){
//		if(max<arr[i]){
//			max= arr[i];
//			
//		}
//		
//	}
	
	//cout<<"max: "<<max<<endl;
	
}
