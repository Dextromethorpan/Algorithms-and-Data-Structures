#include<iostream>
using namespace std;
int power(int x,int n ){
	if(n==0){
		return 1;
	}
	if(n==1){
		return x;
	}
	int smallAns= power(x,n-1);//assume 
	return x*smallAns;
	
	
	
}

int main(){
		int x,n;
	cout<<"Enter x"<<endl;
cin>>x;
cout<<endl;
cout<<"Enter n"<<endl;
cin>>n;
cout<<endl;
	int ans =power(x,n);
	cout<<ans;
	
	
}








