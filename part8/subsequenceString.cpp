#include<iostream>
using namespace std;
int substringOfString(string s,string output[]){
	if(s.size()==0){
		output[0]="";
		return 1;
		
	}
	string smallsubstring=s.substr(1);
	int smallAns_size=substringOfString(smallsubstring,output);
	for(int i =0;i<smallAns_size;i++){
		
		output[i+smallAns_size]= s[0]+ output[i];
		
	}
	return 2*smallAns_size;
	
	
	
}
	
	

int main(){
	string s;
	cin>>s;
	string *output= new string[1000]; 
	int ans =substringOfString(s,output);
	for(int i =0;i<ans;i++){
		cout<<output[i]<<endl;
	}
	
	
	
	
}
