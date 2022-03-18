#include <iostream>
#include "staticmembers.cpp"

using namespace std;

int main()
{
    Student s1,s2,s3,s4,s5,s6;

    cout<<Student::total_num()<<endl;

    return 0;
}