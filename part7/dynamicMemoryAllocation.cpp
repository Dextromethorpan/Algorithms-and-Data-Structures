#include<iostream>
using namespace std;
int main(){
//	int i =10;
//	int j=10;
	int k= 10;
	int k1=10;
//	int k3=10;
//	int *p= &k3;
//	int arr[100];
int *p1= new int;
*p1=10;
//cout<<*p1<<endl;
*p1=*p1+1;
//cout<<*p1<<endl;
int n;
cout<<"enter n"<<endl;
cin>>n;
int *p = new int[n];
//p[0]=10;
//p[1]=20;
//cout<<p[1]<<endl;

for(int i =0;i<n;i++){
	cin>>p[i];
}
for(int i =0;i<n;i++){
	cout<<p[i]<<" ";
}

}
