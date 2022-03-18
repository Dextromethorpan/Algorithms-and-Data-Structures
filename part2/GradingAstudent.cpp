#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3;
	cout<<"Enter the marks of the subjects"<<endl;
	cin>>s1>>s2>>s3;
	int marks = (s1+s2+s3)/3;
	if(marks>=90 && marks<=100){
		cout<<"Congratulations your grade is A and marks is"<<marks<<endl;
	}
	else if(marks>=80 && marks<90){
		cout<<"Congratulations your grade is B and marks is"<<marks;
		
	}
	else if(marks>=70 && marks <80){
		cout<<"Congratulations your grade is C and marks is"<<marks<<endl;
	}
	
	else if(marks>=60 && marks <70){
		cout<<"Congratulations your grade is D and marks is"<<marks<<endl;
	}
	else{
	cout<<"Sorry you are failed and marks is"<<marks<<endl;	
	}
	
	
	
	
}
