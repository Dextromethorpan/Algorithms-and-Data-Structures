class Student
{
    private:
        //Static Members of a Class are atributes that are not
        //associated to the atributes of the objects of a class
        static int totalStudent;
        int age;
        int rollno;

    public:
       
        Student()
        {
            totalStudent++;
        }

        Student(int age,int rollno)
        {
            totalStudent++;
            this->age=age;
            this->rollno=rollno;
        }

        static int total_num()
        {
            return totalStudent;
        }
};

int Student::totalStudent=0;