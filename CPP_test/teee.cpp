
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
// class AB{
//     private:
//     int age;
//     int height;
//     std::string name;
//     public:
//     AB(){
//         this->age = 20;
//         this->name = "imad";
//         // age = 20;
//         this->height = 20;
//     }
//     AB(std::string name,int age,int height)
//     {
//         this->name = name;
//         this->age = age;
//         this->height = height; 
//     }
//     void    getData()
//     {
//         std::cout << "name " << this->name << std::endl;
//         std::cout << "age " << this->age << std::endl;
//         std::cout << "height " << this->height << std::endl;
//     }
// };
// int main()
// {
//     AB a,b("abid",80,80);
//     a.getData();
//     b.getData();
//     return 0;
// }

// COPY constructor


// EXEMPLE1
// class BA{
//     private:
//     int age;
//     std::string name;
//     public:
//     BA(int x)
//     {
//         age = x;
//     }
//     BA( BA &obj1)
//     {
//         age = obj1.age;
//     }
//     int getData()
//     {
//         return age;
//     }
// };
// int main()
// {
//     BA obj1(100);
//     BA obj2(obj1);
//     std::cout << obj2.getData() <<std::endl;
//     return 0;
// }
// EXEMPLE2
// class AB{
//     private:
//     int age;
//     int height;
//     std::string name;
//     public:
//     AB(){
//         this->age = 20;
//         this->name = "imad";
//         this->height = 20;
//     }
//     AB(std::string name,int age,int height)
//     {
//         this->name = name;
//         this->age = age;
//         this->height = height; 
//     }
//     AB(AB &other)
//     {
//         this->name = other.name;
//         this->age = other.age;
//         this->height = other.height; 
//     }
//     // AB(AB &c)
//     // {
//     //     this->name = c.name;
//     //     this->age = c.age;
//     //     this->height = c.height; 
//     // }
//     void    getData()
//     {
//         std::cout << "name " << this->name << std::endl;
//         std::cout << "age " << this->age << std::endl;
//         std::cout << "height " << this->height << std::endl;
//     }
// };
// int main()
// {
//     AB a,b("abid",80,80),c(b) ,d(c)/*or c = b*/;
//     a.getData();
//     b.getData();
//     c.getData();
//     d.getData();
//     return 0;
// }
// EXEMPLE3: special

// class Vec
// {
// private:
//     int * vec;
//     int size;
// public:
// 	Vec (int size = 10)
//     {
// 		this->size = size;  
// 		this->vec = new int [size];
// 	}
// 	// Vec (const Vec & other)
// 	// {
// 	// 	std::cout << "copy constructor" << std::endl;
// 	// 	this->size = other.size;
// 	// 	this->vec = new int [this->size];
// 	// 	for (int i = 0; i < this->size; ++i)
// 	// 	{
// 	// 		this->vec[i] = other.vec[i];
// 	// 	}
// 	// }
// 	~Vec () 
// 	{
// 		delete [] this->vec;
// 	}
// };
// int main()
// {
//     Vec a (5);
//     Vec b (10); // or Vector b = a;
// 	a = b; // translates to a.operator = (b);
// }


// copy constructor and assignment operator are 
// similar as they are both used to initailize one 
// object using another object 

// Test t1, t2;
// t2 = t1;
// Test t3 = t1;
// Explanation: Here, t2 = t1;  calls the assignment operator, same as t2.operator=(t1); and  
// Test t3 = t1;  calls the copy constructor, same as Test t3(t1);


// This pointer
// #include <iostream>
// struct test {
//   int x;
//   test() : x() {}
//   test& foo() { return *this; }
//   test bar() { return *this; }
//   void set( int value ) { x = value; }
// };
// int main() {
//   test t;
//   t.foo().set( 10 );             // modifies t
//   t.bar().set( 5 );              // modifies a copy of t
//   std::cout << t.x << std::endl; // prints 10
// }
// #include <iostream>
// using namespace std;
// class demo
// {
//   int a;
// public:
//   demo():a(9){}
//   demo& fun()//return type isdemo&
//   {
//     return *this;
//   }
// };

// int main()
// {
//   demo obj;
//   obj.fun();
//   return 0;
// }

// #include <iostream>
// using namespace std;

// class Count {
//    private:
//     int value;

//    public:

//     // Constructor to initialize count to 5
//     Count() : value(5) {}


//     // Overload ++ when used as prefix
//     void operator ++ () {
//         ++value;
//     }


//     // Overload ++ when used as postfix
//     void operator ++ (int) {
//         value++;
//     }

//     void display() {
//         cout << "Count: " << value << endl;
//     }
// };

// int main() {
//     Count count1;

//     // Call the "void operator ++ (int)" function
//     count1++;
//     count1.display();

//     // Call the "void operator ++ ()" function
//     ++count1;

//     count1.display();
//     return 0;
// }


// #endif /* EASYFIND_HPP */


// class Hello{
//     private:
//         int i;
//         std::string a;
//         int b;
//     public:
//         Hello(int f,std::string g, int h)
//         {
//             i = f;
//             a = g;
//             b = h;
//         }
//         void    print()
//         {
//             std::cout << i << std::endl << a << std::endl << b << std::endl;
//         }
//         void    operator++(int)
//         {
//             i++;
//         }
// };

// int main()
// {
//     Hello u(19,"imad",12);
//     u.print();
//     u++;
//     u.print();
// }

// class Binar {
//     private:
//         int x;
//         int y;
//     public:
//         Binar(int a,int b)
//         {
//             x = a;
//             y = b;
//         }
//         void print()
//         {
//             std::cout << x << " " << y << std::endl;
//         }
//         Binar  operator+(Binar v2)
//         {
//             int x1,y1;
//             x1 = this->x + v2.x;
//             y1 = this->y + v2.y;
//             Binar v3 = Binar(x1,y1);
//             return v3;
//         }
// };

// int main()
// {
//     Binar a(2,3),b(4,5);
//     a.print();
//     b.print();
//     Binar c = a + b;
//     c.print();
// }

// ***************inheritance*****************
// class Parent {
//     public:
//         int a = 10;
// };
// class child : public Parent{
//     public:
//         int a = 20;
// };

// int main()
// {
//     Parent a;
//     child b;

//     std::cout << b.a;
//     std::cout << b.Parent::a;
// }

// class Y {
//     protected:
//     int height;
//     int width;
//     public:
//     Y()
//     {
//         std::cout << "def" << std::endl;
        
//     };
//     void    set_values(int h,int b)
//     {
//         std::cout << "set value called" << std::endl;
//         height = h;
//         width = b;
//     }
// };
// class J : public Y {

//     public:
//     int     area()
//     {   
//         std::cout << "area J called" << std::endl;
//         return (width + height);
//     }
// };
// class K : public Y {
//     public:
//     int    area()
//     {   
//         std::cout << "area K called" << std::endl;
//         return (width * height);
//     }
// };

// int main()
// {
//     K y;
//     J b;
//     y.set_values(5,2);
//     b.set_values(5,2);
//     std::cout << y.area() << std::endl;
//     std::cout << b.area() << std::endl;
// }
// ***************** private to public *******************

// class A {
//     int i;
//     public:
//     int k,j;
//     int geti(){
//         return i;
//     }
//     void    seti(int x)
//     {
//         i = x;
//     }
// };
// class B : A{
//     public:
//     A::geti;
//     A::seti;

// };

// int main()
// {
//     B a;
//     a.seti(5);
//     std::cout << a.geti() << std::endl;
// }

// // *************constructure and destructor********************

// class A {
//     public:
//     A()
//     {
//         std::cout << "def a" << std::endl;
//     }
//     A(int b)
//     {
//          std::cout << "par a" << std::endl;
//     }
//     ~A()
//     {
//         std::cout << "D A" << std::endl;
//     }
//     void    attack(std::string name)
//     {
//         std::cout << "the a attack" << std::endl;
        
//     }
// };
// class B : public A{
//     public:
//     B():A()
//     {
//         std::cout << "def b" << std::endl;
//     }
//     B(int b):A(b)
//     {
//          std::cout << "par b" << std::endl;
//     }
//     ~B()
//     {
//         std::cout << "D B" << std::endl;
//     }
//     void    attack(std::string name)
//     {
//         std::cout << "the b attack" << std::endl;
        
//     }

// };

// int main()
// {
//     B a;
//     a.attack("imad");
// }

// **************multiple inher****************

// class A{
//     std::string name;
//     protected:
//         void    setname(std::string name){
//             this->name = name;
//         }
//         void    print()
//         {
//             std::cout << this->name << std::endl;
//         }
// };
// class B{
//     int id;
//     protected:
//         void    setid(int id){
//             this->id = id;
//         }
//         void    print()
//         {
//             std::cout << this->id << std::endl;
//         }
// };


// class C : public A , public B{
//     public:
//         C(std::string name,int id){
//             setname(name);
//             setid(id);
//         }
//         void    print()
//         {
//             B::print();
//             A::print();
//         }
// };

// int main()
// {
//     // C b("imad",23);
//     // b.print();
// }


// -Wshadow, -Wno-shadlow

// The -Wshadow option warns if a local variable is overwritten or a parameter is overwritten.
// A warning is given when compiling with clang++ -Wshadow test.cpp.
// And here, when compiling with clang++ -Wshadow -Wno-shadow test.cpp , the warning disappears as in the second picture.
// -Wno-shadow is an option that disables -Wshadow warnings.

// int main()
// {
//     int a;
//     a = 3;
//     int i = 0;
//     while(i < 10)
//     {
//     int a;
//     a= 5;
//     std::cout << a;
//     }

// }


// **************virtaul**********

// class A {
//     public:
//     void dis(){

//     std::cout << "hello" << std::endl;
//     }
// };
// class B: virtual public A {
//     // void dis(){

//     // std::cout << "hello B" << std::endl;
//     // }
// };
// class C : virtual public A{
//     // void dis(){

//     // std::cout << "hello C" << std::endl;
//     // }
// };
// class D : public C, public B{

// };

// int main()
// {
//     D d;
//     d.dis();
// }

// class A{public: int _a;};

// class B:public A{public: int _b;};

// class C:public A{public: int _c;};

// class D:public B,public C{public: int _d;};

// int main()
// {
//     D d;

//     // this tree work
//     // d._b = 10;
//     // d._c = 10;
//     // d._d = 10;

//     // but this not work
//     // d._a = 10;

// }

// A 
// a

// B 
// a and b

// C 
// a and c

// D
// a and b and a and c and d

// when we do virtual the two a come one a
// #include<iostream>
// using namespace std;
// class Person {
// public:
//     Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
//     Person()     { cout << "Person::Person() called" << endl;   }
// };
 
// class Faculty : virtual public Person {
// public:
//     Faculty(int x):Person(x)   {
//        cout<<"Faculty::Faculty(int ) called"<< endl;
//     }
// };
 
// class Student : virtual public Person {
// public:
//     Student(int x):Person(x) {
//         cout<<"Student::Student(int ) called"<< endl;
//     }
// };
 
// class TA : public Faculty, public Student  {
// public:
//     TA(int x):Student(x), Faculty(x)   {
//         cout<<"TA::TA(int ) called"<< endl;
//     }
// };
 
// int main()  {
//     TA ta1(30);
// }
// }




#include <iostream>
#include <stdexcept>

// using namespace std;

// int AddPositiveIntegers(int a, int b)
// {
//     if (a < 0 || b < 0)
//         throw std::invalid_argument("AddPositiveIntegers arguments must be positive");
//     if(b > 0)
//         throw std::invalid_argument("A is positive");
//     return (a + b);
// }

// int main()
// {
//     try
//     {
//         cout << AddPositiveIntegers(-1, 2); //exception
//     }

//     catch (std::invalid_argument& e)
//     {
//         cerr << e.what() << endl;
//         std::cout << "hello world" << std::endl;
//     }
//     catch (std::invalid_argument& e1)
//     {
//         cerr << e1.what() << endl;
//         return -1;
//     }

//     return 0;
// }

// std::string  agep(int a)
// {
//     if(a <= 18)
//         throw (a);
    
//     return ("u are old enough");
    
// }
// int main()
// {
//     try
//     {
//         std::cout << agep(20) << std::endl; 
//     }
//     catch(int f)
//     {
//         std::cout << "you are not old enough" << " Your age is " << f << std::endl;
//     }
//     std::cout << "hello world" << std::endl;
// }

// int main()
// {
//     int x = 0,y=0;
//     try
//     {
//         /* code */
//     std::cout << "enter value" << std::endl;
//     std::cin >> x;
//     std::cin >> y;
//     if(y == 0)
//         throw std::exception();
//     std::cout << x / y << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     catch ()
// } 
// #include <fstream>
// #include <iostream>
// int main()
// {
//     std::ofstream o;
//     o.open("o");
// o << "                                                         .           "    << std::endl;
// o << "                                              .         ;           "    << std::endl;
// o << "                 .              .              ;%     ;;               "    << std::endl; 
// o << "                   ,           ,                :;;%;  %;                "    << std::endl;    
// o << "                    :         ;                   :;%;'     .,         "    << std::endl; 
// o << "           ,.        %;     %;            ;        %;'    ,;          "     << std::endl;
// o << "             ;       ;%;   %;        ,     %;    ;%;    ,%'       "    << std::endl;
// o << "              %;       ;%; %;      ,  ;       %;  ;%;   ,%;'             "  << std::endl;   
// o << "               ;%;      %;        ;%;        %; ;%;  ,%;'               "<< std::endl;   
// o << "                `%;.     ;%;     %;'         `;;%;;%;'                 "<< std::endl;   
// o << "                 `:;%.    ;;%. %@;        %; ;@%;;%'                   "<< std::endl;
// o << "                    `:%;.  :;bd%;           %;@%;'         "<< std::endl;
// o << "                      `@%:.  :;%.         ;@@%;'      "<< std::endl;
// o << "                        `@%.  `;@%.      ;@@%;             "<< std::endl;
// o << "                          `@%. `@%;    ;@@%;         "<< std::endl;
// o << "                            ;@%. :@%;  %@@%;          "<< std::endl;
// o << "                              %@bd;%;bd%;:;       "<< std::endl;
// o << "                                #@.##%:;;    "<< std::endl;
// o << "                                %@@##%::; "<< std::endl;
// o << "                                %@@@%(o);      . '         "<< std::endl;
// o << "                                %@@@o%;:(.,'             "<< std::endl;
// o << "                            `.. %@@@o%::;             "<< std::endl;
// o << "                               `)@@@o%::;             "<< std::endl;
// o << "                                %@@(o)::;         "<< std::endl;
// o << "                               .%@@@@%::;             "<< std::endl;
// o << "                               ;%@@@@%::;.            "<< std::endl;
// o << "                              ;%@@@@##:;;;.   "<< std::endl;
// o << "                          ...;%@@@@@##:;;;;,..        "<< std::endl;
// }   
#include <sstream>
#include <iomanip>
bool is_int(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+')
            return false;
        i++;
    }
    return true;
}
void    its_int(char *str)
{
    std::stringstream in;
    int n;

    in << str;
    in >> n;

    std::cout << std::fixed << std::setprecision(1);
    if(isprint(n))
        std::cout << "char: " << "'" << static_cast<char>(n) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;

    std::cout << "int: " << n << std::endl;
    std::cout << "float: " << static_cast<float>(n) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;


}
// int main(int ac, char **av)
// {
//     // int a = av[1]
//     // std::string in = av[1];
//     if(ac != 2){
//         std::cout << "wa chrif" << std::endl;
//         return 0;
//     }

//     if(is_int(av[1]))
//         its_int(av[1]);
//       int i=0;
//   char str[]="first line \n second line \n";
//   while ((str[i]))
//   {
//     if(isprint(str[i]))
//         putchar (str[i]);
//     i++;
//   }
//   return 0;
//     // if(ac == 2)
//     // {
//     //     std::cout << static_cast<int>(in);
//     // } 
//     // std::cout << " hello";

// }

// #include <string>
// #include <iostream>
// int main()
// {
//     std::string input;
//     std::cin >> input;
//     try{
//         float num = std::stof(input);
//         std::cout << num << std::endl;
//     }
//     catch(const std::exception& e){
//         std::cout << "Invalid input: " << e.what() << '\n';
//         return 1;
//    } 
// }

#include <iostream>
// using namespace std;
 
// int main()
// {
//     int* p = new int(65);
//     char* ch = reinterpret_cast<char*>(p);
//     cout << *p << endl;
//     cout << *ch << endl;
//     cout << p << endl;
//     cout << ch << endl;
//     return 0;
// }


// CPP code to illustrate using structure
// #include <bits/stdc++.h>
// using namespace std;
 
// // creating structure mystruct
// struct mystruct {
//     int x;
//     int y;
//     char c;
//     bool b;
// };
 
// int main()
// {
//     mystruct s;
 
//     // Assigning values
//     s.x = 5;
//     s.y = 10;
//     s.c = 'a';
//     s.b = true;
 
//     // data type must be same during casting
//     // as that of original
 
//     // converting the pointer of 's' to,
//     // pointer of int type in 'p'.
//     int* p = reinterpret_cast<int*>(&s);
 
//     cout << sizeof(s) << endl;
 
//     // printing the value currently pointed by *p
//     cout << *p << endl;
 
//     // incrementing the pointer by 1
//     p++;
 
//     // printing the next integer value
//     cout << *p << endl;
 
//     p++;
 
//     // we are casting back char * pointed
//     // by p using char *ch.
//     char* ch = reinterpret_cast<char*>(p);
 
//     // printing the character value
//     // pointed by (*ch)
//     cout << *ch << endl;
 
//     ch++;
 
//     /* since, (*ch) now points to boolean value,
//     so it is required to access the value using
//     same type conversion.so, we have used
//     data type of *n to be bool. */
 
//     bool* n = reinterpret_cast<bool*>(ch);
//     cout << *n << endl;
 
//     // we can also use this line of code to
//     // print the value pointed by (*ch).
//     cout << *(reinterpret_cast<bool*>(ch));
 
//     return 0;
// }

// int main()
// {
//     int *p = new int(60);
//     char *ch = reinterpret_cast<char *>(p);
//     std::cout << *p << std::endl;
//     std::cout << *ch << std::endl;
//     std::cout << p << std::endl;
//     std::cout << &ch << std::endl;
// }

// ****************** static_cast ******************

// #include<iostream>
// using namespace std;
// class Person {
// public:
//     Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
//     Person()     { cout << "Person::Person() called" << endl;   }
//     virtual void    print(){cout << "animal" << endl;}
// };
 
// class Faculty : public Person {
// public:
//     Faculty()     { cout << "faculty called" << endl;   }
//     Faculty(int x):Person(x)   {
//        cout<<"Faculty::Faculty(int ) called"<< endl;
//     }
//     void    print(){cout << "faculty" << endl;}
//     void    fff(){cout << "im fffff" <<endl;}
// };
 
// class Student : public Person {
// public:
//     Student()     { cout << "student called" << endl;   }
//     Student(int x):Person(x) {
//         cout<<"Student::Student(int ) called"<< endl;
//     }
//     void    print(){cout << "student" << endl;}
// };
 
 
// int main()  {
//     Person *a = new Faculty();
//     a->print();
//     // a->fff();
//     Faculty *f = static_cast<Faculty *>(a);
//     f->fff();

//     // fhad lexemple pointina 3la student ms fach jine 
//     // ncastiw castina l faculty ohna static_cast aydir liha pass
//     // 7it 2 object minhiritin mn nafs l class dakchi 3lach aydwzha
//     // ms had l7ala kat3tabr dangreus 7it t9dar t3tik undefined behavior

//     Person *b = new Student();
//     Faculty *c = static_cast<Faculty *>(b);
//     c->print();
//     c->fff();
// }

// ****************** dynamic_cast ******************
// #include<iostream>
// using namespace std;
// class Person {
// public:
//     Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
//     Person()     { cout << "Person::Person() called" << endl;   }
//     virtual void    print(){cout << "animal" << endl;}
// };
 
// class Faculty : public Person {
// public:
//     Faculty()     { cout << "faculty called" << endl;   }
//     Faculty(int x):Person(x)   {
//        cout<<"Faculty::Faculty(int ) called"<< endl;
//     }
//     void    print(){cout << "faculty" << endl;}
//     void    fff(){cout << "im fffff" <<endl;}
// };
 
// class Student : public Person {
// public:
//     Student()     { cout << "student called" << endl;   }
//     Student(int x):Person(x) {
//         cout<<"Student::Student(int ) called"<< endl;
//     }
//     void    print(){cout << "student" << endl;}
// };
 
 
// int main()  {
//     Person *a = new Faculty();
//     a->print();
//     // a->fff();
//     Faculty *f = static_cast<Faculty *>(a);
//     f->fff();

//     // fhad lexemple pointina 3la student ms fach jine 
//     // ncastiw castina l faculty ohna static_cast aydir liha pass
//     // 7it 2 object minhiritin mn nafs l class dakchi 3lach aydwzha
//     // ms had l7ala kat3tabr dangreus 7it t9dar t3tik undefined behavior

//     Person *b = new Student();
//     Faculty *c = static_cast<Faculty *>(b);
//     c->print();
//     c->fff();

//     // upward casting ,
//     Faculty *g = new Faculty();
//     Person *pp = dynamic_cast<Person *>(g);
//     if(pp != NULL)
//     {
//         cout << "dynamic succes upward" << endl;
//         pp->print();
//     }
//     else
//         cout << "dynamic faild  upward" << endl;
//     // down word casting
//     Faculty *p = dynamic_cast<Faculty *>(a);
//     if(p != NULL)
//     {
//         cout << "dynamic succes downcast" << endl;
//         p->print();
//     }
//     else
//         cout << "dynamic faild  downcast" << endl;
//     // wrong downward casting
//     Person * pa = new Student();
//     Faculty *w = dynamic_cast<Faculty *>(pa);
//     if(w != NULL)
//     {
//         cout << "dynamic succes downcast" << endl;
//         w->print();
//     }
//     else
//         cout << "dynamic faild  downcast" << endl;

// }

// ************************** STL **************************



#include <iostream>
#include <vector>
using namespace std;
 
int main() {

   // create a vector to store int
   vector<int> vec; 
   vector<int> vec1; 
   int i;
    vector<int>::iterator ptr;
   // display the original size of vec
   cout << "vector size = " << vec.size() << endl;

   // push 5 values into the vector
   for(i = 0; i < 5; i++) {
      vec.push_back(i);
   }
   for(i = 8; i < 11; i++) {
      vec1.push_back(i);
   }
   // display extended size of vec
   cout << "extended vector size = " << vec.size() << endl;
    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(vec1.begin(), vec1.end(), inserter(vec1,ptr));
    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int &x : vec) 
        cout << x << " ";


    ptr = vec.begin();
    // advance increment the iterator position till the sppecified number mentioned
    advance(ptr,2);
    std::cout << "advance = " << *ptr << std::endl;
//    access 5 values from the vector
   for(i = 0; i < 5; i++) {
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }
//     vector<int>::iterator ptr;
//     vector<int>::iterator a;
//     ptr = vec.end();
//     a = vec.begin();
//     std::cout << "end = " << *ptr << std::endl;
//     std::cout << *a << std::endl;
//    // use iterator to access the values
//    vector<int>::iterator v = vec.begin();
//    while( v != vec.end()) {
//       cout << "value of v = " << *v << endl;
//       v++;
//    }

   return 0;
}


