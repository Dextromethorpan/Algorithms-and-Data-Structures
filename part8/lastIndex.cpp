#include<iostream>
using namespace std;
int findlastIndex(int arr[],int n,int x){
	if(n==0){// base case 
		return -1;
	}//{1,2,1,1,7};
	int ans = findlastIndex(arr+1,n-1,x);
	if(ans==-1){
		if(arr[0]==x){
			return 0;
		}
		else{
			return -1;
		}
		
	}
	return ans+1;
	
	
	

	
}

int main(){
	int arr[]{1,2,3,4,7};
	int n = 5;
	int x= 1;
	int index=findlastIndex(arr,n,x);
	cout<<"Index is: "<<index<<endl;
	
}
