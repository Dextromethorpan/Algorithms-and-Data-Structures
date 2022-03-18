#include<iostream>
using namespace std;
void reverse(int a[],int n){
	int i ,j;
	i=0;
	j=n-1;
	while(i<j){
		int temp = a[i];
		a[i]= a[j];
		a[j]= temp;
		i++;
		j--;
		
		
		
	}
	
}

int main(){
	int a[100];
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	} 
	
	cout<<"before reverse"<<endl;
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
	reverse(a,n);
	cout<<"after reverse"<<endl;
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
		
	}
	
	
}
