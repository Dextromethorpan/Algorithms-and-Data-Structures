#include <iostream>
#include "PairClass.cpp"

using namespace std;

int main()
{
    // Pair<int, char> p1; 
    // //Como estamos usando una clase tipo template, necesitamos aclarar cómo son los 

    // p1.setX(7);
    // p1.setY('a');
    // cout<<p1.getX();

    Pair<Pair<int,int>,int > p2; //De esta manera, aumentamos el  
    p2.setY(6);
    Pair<int,int> p3;
    p3.setX(10);
    p3.setY(29);
    p2.setX(p3);

    //Concatenamos métodos para acceder a los atributos de p3, que al mismo tiempo son los 
    //atributos de p2.
    cout<<p2.getX().getX()<<endl;
    cout<<p2.getX().getY()<<endl;



    return 0;
}