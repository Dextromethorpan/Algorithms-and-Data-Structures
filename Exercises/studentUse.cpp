#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{
    int age=30;
    char name[]="Luciano";
    student s1(age,name);
    s1.display();


    return 0;
}

