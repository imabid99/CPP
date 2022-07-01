#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;
int main ()
{
std::cout<<std::setbase(32);
std::cout<<156<<std::endl;
long double amt;
std::cout<< "Enter the amount: ";
std::cin>>std::get_money(amt);
if (std::cin.fail()) std::cout<< "Error reading price\n";
else std::cout<< "The amount that you have entered is: " << amt << '\n';
std::cout<< "Price:" <<std::put_money(10.50L) << '\n';
structstd::tm clk;
std::cout<< "Enter the time: ";
std::cin>>std::get_time(&clk,"%R"); // It will extract the date in 24 Hr format
if (std::cin.fail()) std::cout<< "Error reading time\n";
else {
std::cout<< "The entered time is: ";
std::cout<<clk.tm_hour<< " hours and " <<clk.tm_min<< " minutes\n";
}
using std::chrono::system_clock;
std::time_t t = system_clock::to_time_t (system_clock::now());
structstd::tm * ptm = std::localtime(&t);
std::cout<< "The local time is: " <<std::put_time(ptm,"%c") << '\n';
return 0;
}