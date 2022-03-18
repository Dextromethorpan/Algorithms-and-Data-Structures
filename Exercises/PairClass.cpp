//Template Class

template<typename U,typename V> 

class Pair
{
    private:
        U x;
        V x;

    public:
    setX(U x)
    {
        this->x=x;
    } 

    setY(U y)
    {
        this->y=y;
    }

    U getX()
    {
        return x;
    }

    V getY()
    {
        return y;
    }



};