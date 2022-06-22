#include <iostream>

int main()
{
    std::string HELLO = "HI THIS IS BRAIN";
    std::string *stringPTR = &HELLO;
    std::string &stringREF = HELLO;

    std::cout
    << "The memory address of the string\t:\t" << &HELLO << std::endl
    << "The memory address held by stringPTR\t:\t" << stringPTR << std::endl
    << "The memory address held by stringREF\t:\t" << &stringREF << std::endl
    << std::endl << "The value of the string variable\t:\t" << HELLO <<std::endl
    << "The value pointed to by stringPTR\t:\t" << *stringPTR <<std::endl
    << "The value pointed to by stringREF\t:\t" << stringREF << std::endl;
    return 0;

}