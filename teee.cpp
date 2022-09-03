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

class Binar {
    private:
        int x;
        int y;
    public:
        Binar(int a,int b)
        {
            x = a;
            y = b;
        }
        void print()
        {
            std::cout << x << " " << y << std::endl;
        }
        Binar  operator+(Binar v2)
        {
            int x1,y1;
            x1 = this->x + v2.x;
            y1 = this->y + v2.y;
            Binar v3 = Binar(x1,y1);
            return v3;
        }
};

int main()
{
    Binar a(2,3),b(4,5);
    a.print();
    b.print();
    Binar c = a + b;
    c.print();
}