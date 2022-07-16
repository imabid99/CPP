/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:30:09 by imabid            #+#    #+#             */
/*   Updated: 2022/07/16 19:58:56 by imabid           ###   ########.fr       */
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
	std::cerr << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void    Harl::complain(std::string level)
{
    int i = 0;
    typedef void (Harl::*HARLPTR)();
    HARLPTR harl[4] = {
        &Harl::info,
        &Harl::warning,
        &Harl::error,
        &Harl::debug
    };
    std::string levels[4] = {"INFO","WARNING","ERROR","DEBUG"};
    for(i = 0; i < 4; i++)
        if (level.compare(levels[i]) == 0)
        {
            (this->*(harl[i]))();
            break ;
        }
}