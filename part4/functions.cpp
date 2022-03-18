#include<iostream>
using namespace std;

int factorial(int n){
	int i =1;
	int fact =1;
	while(i<= n){
		fact= fact* i;
		i++;
	}
	return fact;
	
}

void printTillN(int a ){
	int i =1;
	while(i<=a){
		cout<<i<<" ";
		i++;
	}
	
}

int main(){
	cout<<"enter n"<<endl;
	int n ,r;
	cin>>n;
	
//	cout<<"enter r"<<endl;
//	cin>>r;
//	int i = 1;
//	int fact_n= factorial(n);
//	int fact_r=factorial(r);
//	int fact_n_r= factorial(n-r);
//	int ans = fact_n/(fact_r*fact_n_r);
//	cout<<ans<<endl;
	
	printTillN(n);
	//cout<<i;
	cout<<endl;
	printTillN(100);
	cout<<endl;
	//
	///
	//
	
	printTillN(500);
	
	
	
	
/*	
	while(i<= n){
		fact_n= fact_n* i;
		i++;
	}
	
	int fact_r=1;
	i= 1;
	while(i<=r){
		
		fact_r=fact_r* i;
			i++;
	}
	
	int fact_n_r= 1;
	i= 1;
	while(i<=n-r){
		fact_n_r=fact_n_r*i;
			i++;
		
	}
		int ans = fact_n/(fact_r*fact_n_r);
	cout<<ans<<endl;
	*/

	
	
	
}
