#include<iostream>
using namespace std;
int main(){
	int num =1345;
	int ans =0;
	while(num!=0){
		ans = ans*10 + num%10;
		num=num/10;
		
	}
	cout<<"ans is "<<ans<<endl;
}
