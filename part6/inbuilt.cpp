#include<iostream>
using namespace std;
#include<cstring>
void printPrefixes(char input[]){
	for(int i =0;input[i]!='\0';i++){
		
		for(int j =0;j<=i;j++){
			cout<<input[j];
		}
		cout<<endl;
	}
	
}
int main(){
	char input[100]="abcd";
	printPrefixes(input);
//	char input[100]="abcd";
//	char input2[100]="cdef";
//  cout<<"Before copying"<<endl;
//	cout<<input<<endl;
//	cout<<input2<<endl;
//		cout<<" comparison before copying"<<endl;
//		if(strcmp(input,input2)==0){
//		cout<<"same"<<endl;
//	}
//	else{
//		cout<<"not same"<<endl;
//	}
//	//strcpy(input,input2);
//	strncpy(input,input2,3);
//	cout<<"After copying"<<endl;
//	cout<<input<<endl;
//	cout<<input2<<endl;
//	cout<<" comparison after copying"<<endl;
//	if(strcmp(input,input2)==0){
//		cout<<"same"<<endl;
//	}
//	else{
//		cout<<"not same"<<endl;
//	}
//	
}
