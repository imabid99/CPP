/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:54:27 by imabid            #+#    #+#             */
/*   Updated: 2022/09/15 17:08:22 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form::Form(const Form &other)
{
     *this = other;
}
 
Form &Form::operator=(const Form &other)
{
    (void)other;
    return *this;
}
Form* Intern::makeFormShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form* Intern::makeFormRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form* Intern::makeFormPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form*    Intern::complain(std::string level)
{
    int i = 0;
    std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
    InternPTR Intern[4] = {
        &Intern::debug,
        &Intern::info,
        &Intern::warning,
        &Intern::error
    };
    for(i = 0; i < 4; i++)
        if (level.compare(levels[i]) == 0)
            break ;
    switch(i)
    {
        case 0:
            (this->*(Intern[i]))();

            break ;
        case 1:
            (this->*(Intern[i]))();

            break ;
        case 2:
            (this->*(Intern[i]))();
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
    }
}