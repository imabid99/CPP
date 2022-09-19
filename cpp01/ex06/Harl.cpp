/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:30:09 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 15:08:18 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
	std::cerr << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl ;
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl ;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl ;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl ;
}

void    Harl::complain(std::string level)
{
    int i = 0;
    std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
    HARLPTR harl[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for(i = 0; i < 4; i++)
        if (level.compare(levels[i]) == 0)
            break ;
    switch(i)
    {
        case 0:
            (this->*(harl[i]))();
            (this->*(harl[i+1]))();
            (this->*(harl[i+2]))();
            (this->*(harl[i+3]))();
            break ;
        case 1:
            (this->*(harl[i]))();
            (this->*(harl[i+1]))();
            (this->*(harl[i+2]))();
            break ;
        case 2:
            (this->*(harl[i]))();
            (this->*(harl[i+1]))();
            break ;
        case 3:
            (this->*(harl[i]))();
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
    }
}