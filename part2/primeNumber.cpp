#include<iostream>
using namespace std;
int main(){
		int n;
	cout<<"Enter the number "<<endl;
     cin>>n;
     int i =1;
     while(i<=n){// used for rows 
     	int j=1;
     	while(j<=n){// used for printing ith row
     		cout<<"*";
     		j=j+1;
		 }
     	cout<<endl;
     	i=i+1;
     	
	 }
     
//     int i =2;
//     bool divided = false;
//     while(i<n){
//     	if(n%i==0){
//     		divided = true;
//     		
//		 }
//     	i= i+1;
//     	
//     	
//	 }
//	 
//	 if(divided){
//	 	cout<<n<< " is not prime"<<endl;
//	 }
//	 else{
//	 		cout<<n<< " is a prime"<<endl;
//	 }
//	 


	
	
}
