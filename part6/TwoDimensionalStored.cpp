#include<iostream>
using namespace std;
void print(int arr[][5],int m,int n){
		for(int i =0;i<m;i++){
		for(int j =0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
int main(){
	int arr[5][5];
	int m,n;
	cout<<"enter the rows"<<endl;
	cin>>m;
	cout<<"enter the columns"<<endl;
	cin>>n;
	
	for(int i =0;i<m;i++){
		for(int j =0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	print(arr,m,n);
	
	

	
	
	}
	
	
	
