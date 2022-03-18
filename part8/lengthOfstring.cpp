#include<iostream>
using namespace std;


int lengthString(char str[]){
	if(str[0]=='\0'){//base case
		return 0;
	}
	int ans = lengthString(str+1);
	return 1+ans;
	
	
	
}
int main(){
	char str[100];
	cout<<"enter the string "<<endl;
	cin>>str;
	int ans = lengthString(str);
	
	cout<<ans<<endl;
}
