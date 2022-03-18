#include<iostream>
using namespace std;
int calculateSquare(int n){
	
	int ans = n*n;
	n--;
	cout<<"N value is in calculateSquare :"<<n<<endl;
	return ans;
}
int main(){
	int n ;
	cout<<"Enter n"<<endl;
	cin>>n;
	
	//calculateSquare(n);
	cout<<"N value is in main :"<<n<<endl;
	
int output=	calculateSquare(n);
cout<<output<<endl;
	
}
