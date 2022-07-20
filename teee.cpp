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

// class Dual
// {
//     public:
//     int a;
//     Dual(int x)
//     {
//         a = x;
//         std::cout << a << std::endl;
//     }
// };

// int main()
// {
//     Dual obj1;
//     // Dual obj2(10);
// }
// class Abc
// {
//     int i;
//     public:
//     Abc()
//     {
//         i=0;
//         std::cout << "constructor";
//     }
//     ~Abc()
//     {
//         std::cout << "destructor";
//     }
// };

// void f()
// {
//     static Abc obj;
// }

// int main()
// {
//     int x=0;
//     if(x<5)
//     {
//         f();
//     x++;
//     }
//     std::cout << "END";
// }
// class X
// {
//     public:
//     static void f()
//     {
//         // statement
//         std::cout << "hello world";
//     }
// };

// why we work with reference and pointer
// class A{
//     private:
//     std::string ty;
//     public:
//     A(std::string &a){
//         ty = a;
//         std::cout << ty << std::endl;
//     };
//     ~A(){};


// };
// int main()
// {
//     // X::f();   // calling member function directly with class name
//     // int x = 5;
//     // int &k = x;
//     // int y = 10;
//     // k = y;
//     // std::cout << ++x;
//     std::string b = "hello";
//     A u(b);
// }


// default constructor
//  NB : the constructor included with the compiler is not initialaz 
//         the member attribute its only using to allocate memory that is why
//         after allcation memory they are getting the garbage value 
//         mn a7ssen create our DEFAULT constructor, So that we can initialize member variables 
//         with some known values
class AB{
    private:
    int age;
    int height;
    std::string name;
    public:
    AB(): age(20){
        name = "imad";
        // age = 20;
        height = 20;
    }
    void    getData()
    {
        std::cout << "name " << name << std::endl;
        std::cout << "age " << age << std::endl;
        std::cout << "height " << height << std::endl;
    }
};
int main()
{
    AB a;
    a.getData();
    return 0;
}