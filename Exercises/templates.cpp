//Template Function

#include <iostream>

template<typename T>

using namespace std;

T find_max( T x, T y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}




int main()
{
    cout<<find_max<int>(5,7)<<endl;
    cout<<find_max<char>('a','b')<<endl;
    cout<<find_max<string>("fad","fbd")<<endl;

    return 0; 
}