#include<iostream>
using namespace std;
void removeX(char str[]){
	if(str[0]=='\0'){
		return ;
	}
	if(str[0]!='x'){
		removeX(str+1);
	}
	else{
		int i ;
		for( i=1;str[i]!='\0';i++){
			str[i-1]= str[i];
			
		}
		str[i-1]='\0';
		removeX(str);
		
		
	}
	
	
}
int main(){
	char str[100];
	cout<<"enter the string "<<endl;
	cin>>str;
	removeX(str);
	cout<<"the string after the x are removed"<<endl;
	cout<<str<<endl;
	
	}
