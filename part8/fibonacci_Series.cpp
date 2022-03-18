#include<iostream>
using namespace std;
int fibo(int n ){
	//base case
	if(n==0){
		return 0;
		
	}
	if(n==1){
		return 1;
	}
//assume 
int smallOutput1= fibo(n-1);//assume 
int smallOutput2=fibo(n-2);//assume 
	int ans = smallOutput1+smallOutput2;
	return ans;
}
int main(){
	int n ;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<endl;
	int ans = fibo(n);
	cout<<ans<<endl;
}


