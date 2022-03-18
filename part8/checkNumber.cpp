#include<iostream>
using namespace std;
bool checkNumber(int arr[],int n,int x){
	if(n==0){
		return false;
	}
	//{1,3,2,7,8};
	if(arr[0]==x){
		return true;
	}
	
	bool smallAns=checkNumber(arr+1,n-1,x);
	if(smallAns){
		return true;
	} 
	else{
		return false;
	}
	
	
}
int main(){
		int arr[]{1,3,2,7,8};
	int n = 5;
	int x = 2;
	bool ans = checkNumber(arr,n,x);
	if(ans){
		cout<<"the value is present "<<endl;
	}
	else{
		cout<<"It is not present"<<endl;
	}
}
