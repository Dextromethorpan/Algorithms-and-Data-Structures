#include<iostream>
using namespace std;
// to find the factorial 
int fact(int n){
	if(n==0){//base case 
		return 1;
	}
	int smallAns= fact(n-1);///assume it 
	return n*fact(n-1);
	
}

//int fact(int n){
//	if(n==0){
//		return 1;
//	}
	
//	int smallAns= fact(n-1);
//	int ans = n*smallAns;
//	return ans;
//	
//	
//	
//}
int main(){
	int n = 5;
	int ans = fact(n);
	cout<<"ans is : "<<ans<<endl;
}
