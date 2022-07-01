
#include <iostream>
#include <string>
#include <iomanip>

class Line{

    private:
    int a;
    public:
    void    set_lenght(int len);
    int get_lenght();
    Line(int len);
    ~Line();
};
void    Line::set_lenght(int len)
{
    a = len;
}
Line::Line(int len)
{
    std::cout << "mahiloch world" << std::endl;
    a = len;
}
int Line::get_lenght()
{
    return a;
}
Line::~Line()
{
    std::cout << "hello world" << std::endl;
}
int main()
{
    Line Line(100);

    std::cout << "this is the len of constructore " <<   Line.get_lenght() << std::endl;
    Line.set_lenght(200);
    std::cout << "this is the len of set " <<   Line.get_lenght() << std::endl;
    
}