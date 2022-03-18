#include<iostream>
using namespace std;
int findLength(char input[]){
	int count=0;
	int i =0;
	while(input[i]!='\0'){
		count++;
		i++;
	}
	return count;
	
}
void reverseString(char input[]){
	int i,j;
	i=0;
	j=findLength(input)-1;
	
	while(i<j){
		char temp=input[i];
		input[i]=input[j];
		input[j]=temp;
		i++;
		j--;
	}
	
}

void replaceCharacter(char input[],char a ,char b){
	int i =0;
	while(input[i]!='\0'){
		if(input[i]==a){
			input[i]=b;
			
		}
		i++;
	}
	
}
int main(){
//	int arr[5];
//	char arr2[]={'a','b','c'};
//	cout<<arr[0]<<endl;
//	cout<<arr<<endl;
//	cout<<arr2<<endl;
//for(int i =0;i<5;i++){
//	cin>>arr[i]<<endl;
//}
char input[100];
//cin>>input;
cin.getline(input,100);
char a= 'b';
char b= 'x';
cout<<endl;
replaceCharacter(input,a,b);
cout<<input<<endl;









//cout<<"Before reverse "<<input<<endl;
//reverseString(input);
//cout<<"after reverse "<<input<<endl;

//input[2]='\0';
//cout<<"this is input "<<input<<endl;
//int ans =findLength(input);
//cout<<ans<<endl;
//cout<<input<<endl;

}
