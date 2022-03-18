#include<iostream>
using namespace std;
int main(){
	// relational operators
	int a;
	int b;
	cout<<"Enter the values"<<endl;
	cin>>a>>b;
	int c ,d;
		cout<<"Enter the values c and d"<<endl;
		cin>>c>>d;
	bool ans= a<b;
	bool ans2=c<d;
	 bool answer= ans || ans2;
      cout<<answer<<endl;
      cout<<"negation of answer is"<<!answer;
	cout<<endl;
//	cout<<ans2;
//	a
}
