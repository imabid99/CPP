#include <iostream>
class Copy {
    private:
        int a;
        int b;
    public :
        Copy(int f, int j)
        {
            a = f;
            b = j;
        };
        // Copy();
        // ~Copy();
        Copy(Copy &s)
        {
            std::cout << "copy constructer" << std::endl;
            a = s.a;
            b = s.b;
        }
        void print()
        {
            std::cout << "a = " << a << std::endl;
            std::cout   << "b = " << b << std::endl;

        }

};

int main()
{
    Copy p(50,80),p2(p),p3 = p2;
    p3.print();
    return 0;
}