#include<iostream>
using namespace std;
void PrintSubsequence(string s,string output){
	if(s.size()==0){
		cout<<output<<endl;
		return ;
	}
	PrintSubsequence(s.substr(1),output);
	PrintSubsequence(s.substr(1),output+s[0]);
}

int main(){
	string s;
	cin>>s;
 string	output="";
	PrintSubsequence(s,output);
	
}
