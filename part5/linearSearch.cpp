#include<iostream>
using namespace std;
int linearSearch(int arr[],int x,int n){
	for(int i =0;i<n;i++){
		
		if(arr[i]==x){
			return i;
		}
	}
	
	return -1;
	
}
int main(){
	int arr[100];
	int n ;
	cout<<"enter n"<<endl;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	
	int x = 30;
	int index= linearSearch(arr,x,n);
	cout<<"Index : "<<index;
	
}
