#include <climits>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << "bits in a single char: " << CHAR_BIT << endl
    << endl
    << "Sizes of primitive types:\n"
    << "  char:        " << sizeof(char) << endl
    << "  bool:        " << sizeof(bool) << endl
    << "  short:       " << sizeof(short) << endl
    << "  int:         " << sizeof(int) << endl
    << "  long:        " << sizeof(long) << endl
    << "  long long:   " << sizeof(long long) << endl
    << "  float:       " << sizeof(float) << endl
    << "  double:      " << sizeof(double) << endl
    << "  long double: " << sizeof(long double) << endl
    << endl
    << "  Not so primitive types:\n"
    << "    string(\"\"): " << sizeof(string("")) << endl
    << "    string(\"Hello, World!\"): " << sizeof(string("Hello, World!")) << endl
    << "    vector<int>(0): " << sizeof(vector<int>(0)) << endl
    << "    vector<int>(10): " << sizeof(vector<int>(10)) << endl
    << endl;
}