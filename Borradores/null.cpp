////Pointers in Functions
// //Pointers can be accepted as arguments in a 
// //function
// //A function can return a pointer

// #include <iostream>
// using namespace std;

// //Function that returns a pointer
// //getRandom() es una función que devuelve 
// //un puntero que apunta al array r.
// //El array r tiene que ser estático
// /*
// int *getRandom()
// {
//     static int r[10]; //para qué me sirve esto?

//     srand((unsigned)time(NULL));
//     //esto genera los números random

//     for(int i=0;i<10;++i)
//     {
//         r[i]=rand();
//         cout<<r[i]<<endl;
//     }

//     return r;
// }


// //La siguiente función acepta un puntero como
// //argumento
// double getMean(int *arr,int size)
// {
//     int i, sum=0;
//     double avg;

//     for(i=0;i<size;i++)
//     {
//         sum+=arr[i];
//     }

//     avg=double(sum)/size;

//     return avg;
// }



// int main()
// {
//     /*
//     int *ptr=NULL;
//     //ptr es un puntero que apunta a nada.
//     //en realidad apunta a la dirección de memoria
//     //cero, la cual por convención es la posición
//     //nula
//     cout<<"The value of ptr is"<<ptr;
//     */

//    /*
//    int *p;

//     p=getRandom();

//     for(int i=0;i<10;i++)
//     {
//         cout<<"*(p + "<<i<<") : ";
//         cout<<*(p+i)<<endl;
//     }
//     */

//     int balance[5]={1000,2,3,17,50};
//     double avg;

//     avg=getMean(balance,5);

//     cout<<"Average value is: "<<avg<<endl;

//     return 0;
// }

//---------------------------
//'this' ponter
//this funciona para solucionar el problema del
//overloading 

//Situaciones dónde se usa el this pointer

//1.Cuando el nombre de la variable local es el
//mismo que el del atributo

/*
#include<iostream>
using namespace std;

class Test
{
    private:
        int x;

    public:
        void SetX(int x)
        {
            this->x=x;
        }
        void print()
        {
            cout<<"x = "<<x<<endl;
        }
};

int main()
{
    Test obj;
    int x=20;
    obj.SetX(x);
    obj.print();
    return 0;
}
*/

//2. Para retornar referencias a un objeto
//llamado.
// #include <iostream>
// using namespace std;

// class Test
// {
//     private:
//         int x;
//         int y;

//     public:
//         Test(int x=0,int y=0)
//         {
//             this->x=x;
//             this->y=y;
//         }

//         Test &setX(int a)
//         {
//             x=a;
//             return *this;
//         }

//         Test &setY(int b)
//         {
//             y=b;
//             return *this;
//         }

//         void print()
//         {
//             cout<<"x= "<<x<<"y= "<<y<<endl;
//         }
// };

// int main()
// {
//     Test obj1(5,5);
//     obj1.setX(10).setY(20);
//     obj1.print();

//     return 0;
// }

