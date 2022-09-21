/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:21:05 by imabid            #+#    #+#             */
/*   Updated: 2022/09/21 11:11:42 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>

bool is_int(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+')
            return false;
        if((str[0] == '-' || str[0] == '+') && !isdigit(str[1]))
            return false;
        i++;
    }
    return true;
}

void    its_int(std::string str)
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

void    its_float(std::string str)
{
    try
    {
        float n = std::stof(str);
        std::cout << std::fixed << std::setprecision(1);
        if(isprint(n))
            std::cout << "char: " << "'" << static_cast<char>(n) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(n) << std::endl;
        std::cout << "float: " << n << 'f' << std::endl;
        std::cout << "double: " << static_cast<double>(n) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

bool    is_float(std::string str)
{
    int i = 0;
    while(str[i] != '.')
    {
        if(!isdigit(str[i]) && (str[0] != '-' && str[0] != '+' && !isdigit(str[1])))
            return false;
        if((str[0] == '-' || str[0] == '+') && !isdigit(str[1]))
            return false;
        i++;
    }
    if(str[i] == '.')
    {
        ++i;
        while(str[i])
        {
            if(!isdigit(str[i]) && str[i] != 'f')
                return false;
            if(str[i] == 'f' && str[i + 1] != '\0')
                return false;
            i++;
        }    
    }
    if(str[i - 1] == 'f' && str[i] == '\0')
            return true; 
    return false;
}

void    its_double(std::string str)
{
    try
    {
        double n = std::stod(str);
        std::cout << std::fixed << std::setprecision(1);
        if(isprint(n))
            std::cout << "char: " << "'" << static_cast<char>(n) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(n) << std::endl;
        std::cout << "float: " << static_cast<float>(n) << 'f' << std::endl;
        std::cout << "double: " << n << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void    its_char(std::string str)
{
    std::cout << std::fixed << std::setprecision(1);
    if(isprint(str[0]))
        std::cout << "char: " << "'" << str[0] << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(str[0]) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
}

bool    is_double(std::string str)
{
    int i = 0;
    while(str[i] != '.')
    {
        if(str[0] == '-' && str[0] == '+' && !isdigit(str[1]))
            return false;
        if((str[0] == '-' || str[0] == '+') && !isdigit(str[1]))
            return false;
        i++;
    }
    if(str[i] == '.')
    {
        ++i;
        while(str[i])
        {
            if(!isdigit(str[i]))
                return false;
            i++;
        } 
    }
    return true;
}
void    its_pseudo(std::string str)
{
    if(str == "-inff" || str == "-inf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
    }
    else if(str == "+inff" || str == "+inf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : +inff" << std::endl;
        std::cout << "double : +inf" << std::endl;
    }
    else if(str == "nanf" || str == "nan")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else
        std::cout << "ERROR" << std::endl;
    
}
int main(int ac, char **av)
{
    std::string all;
    if(ac != 2){
        std::cout << "ERROR: ARGS" << std::endl;
        return 0;
    }
    all = av[1];
    if(is_int(all))
        its_int(all);
    else if(is_float(all))
        its_float(all);
    else if(is_double(all))
        its_double(all);
    else if(all.length() == 1)
        its_char(all);
    else
        its_pseudo(all);
    return 0;
}