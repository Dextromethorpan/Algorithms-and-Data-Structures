using namespace std;

class student
{
    public:
        int age;
        char *name;

        student(int age, char *name)
        {
            this->age=age;
            this->name=name;
        }

        void display()
        {
            cout<<"Name"<<" "<<name<<endl;
            cout<<"Age"<<" "<<age<<endl;
        }

};
