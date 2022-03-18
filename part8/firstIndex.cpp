#include<iostream>
using namespace std;
int findfirstIndex(int arr[],int n,int x){
	if(n==0){// base case 
		return -1;
	}//{1,3,2,7,8
	if(arr[0]==x){
		return 0;
	}
	int ans = findfirstIndex(arr+1,n-1,x);
	if(ans==-1){
		return ans;
		
	}
	else{
		return ans+1;
		
	}
	
}

int main(){
	int arr[]{1,3,2,7,7};
	int n = 5;
	int x= 8;
	int index=findfirstIndex(arr,n,x);
	cout<<"Index is: "<<index<<endl;
	
}
