#include<iostream>
using namespace std;
bool sortedArray(int arr[],int n){
	if(n==0|| n==1){
		return true;
	}
	//assume this line
	bool smallAns= sortedArray(arr+1,n-1);
	if(!smallAns){
		return false;
	}
	if(arr[0]<arr[1]){
		return true;
	}
	else{
		return false;
	}
	
	
	
}
bool sortedArray2(int arr[],int n){
	if(n==0|| n==1){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}
	
	bool smallAns= sortedArray2(arr+1,n-1);
	if(smallAns){
		return true;
	}
	else{
		return false;
	}
		
}

int main(){
	int arr[]{1,3,2,7,8};
	bool ans = sortedArray2(arr,5);
	if(ans){
		cout<<"Array is sorted"<<endl;
		
	}
	else{
		cout<<"Array is not sorted "<<endl;
		
	}
	
	
}
