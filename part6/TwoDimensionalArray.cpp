#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
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
	int sum;
	for(int j=0;j<n;j++){
		sum =0;
		for(int i =0;i<m;i++){
		sum = sum+	arr[i][j];
		}
		cout<<sum<<" ";
	}
	
	
//	cout<<endl;
//	int max= 0;
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			if(max<arr[i][j]){
//				max= arr[i][j];
//			}
//		}
//	}
//	cout<<" max "<<max<<endl;
//	int sum =0;
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			sum = sum + arr[i][j];
//		}
//	}
//	cout<<"Sum is "<<sum<<endl;
//	cout<<"Print Row wise"<<endl;
//	for(int i =0;i<m;i++){
//		for(int j =0;j<n;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<endl;
//		cout<<"Print Column wise"<<endl;
//	for(int j =0;j<n;j++){
//		for(int i =0;i<m;i++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	
	
	
	
}
