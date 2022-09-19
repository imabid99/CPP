/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:21:05 by imabid            #+#    #+#             */
/*   Updated: 2022/09/19 15:24:13 by imabid           ###   ########.fr       */
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

bool    is_float(std::string str)
{
    int i = 0;
    while(str[i] != '.')
    {
        if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+')
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

void    its_char(std::string str)
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

bool    is_double(std::string str)
{
    int i = 0;
    while(str[i] != '.')
    {
        if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+')
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

int main(int ac, char **av)
{
    if(ac != 2){
        std::cout << "ERROR: ARGS" << std::endl;
        return 0;
    }
    if(is_int(av[1]))
        its_int(av[1]);
    if(is_float(av[1]))
        its_float(av[1]);
    if(is_double(av[1]))
        its_double(av[1]);
    if(is_char(av[1]))
        its_char(av[1]);
}