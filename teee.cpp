#include <iostream>


// class Student{
//     public:
//     int f;
//     std::string hh;
//     Student(int a,std::string name);
//     Student(int a);
//     Student();
//     ~Student();

// };
// Student::Student(int a,std::string name)
// {
//     f = a;
//     hh = name;
//     std::cout << "my note is :" << a << "and my name is : " << name << std::endl;

// }
// Student::Student(int a)
// {
//     f = a;
//     std::cout << "my note : " << a << std::endl;
// }
// Student::Student()
// {
//     static int u;

//     f = u++;
//     std::cout << "i dont have any note :\\" << std::endl;
// }
// Student::~Student()
// {
    
//     std::cout << "by :\\" << hh << " " << f << std::endl;
// }
// int main()
// {
//     Student A(18,"imad abid");
//     Student B(18);
//     Student b;
//     Student k;
// }

class Dual
{
    public:
    int a;
    Dual(int x)
    {
        a = x;
        std::cout << a << std::endl;
    }
};

int main()
{
    Dual obj1;
    // Dual obj2(10);
}

