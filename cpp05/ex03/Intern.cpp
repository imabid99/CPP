/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:54:27 by imabid            #+#    #+#             */
/*   Updated: 2022/09/15 18:28:05 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &other)
{
     *this = other;
}
 
Intern &Intern::operator=(const Intern &other)
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

Form*    Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string names[3] = {"presidential pardon","robotomy request","shrubbery creation"};
    INTERNPTR Intern[3] = {
        &Intern::makeFormPresidentialPardonForm,
        &Intern::makeFormRobotomyRequestForm,
        &Intern::makeFormShrubberyCreationForm,
    };
    for(i = 0; i < 4; i++)
        if (name.compare(names[i]) == 0)
            break ;
    switch(i)
    {
        case 0:
            (this->*(Intern[i]))(target);
            break ;
        case 1:
            (this->*(Intern[i]))(target);
            break ;
        case 2:
            (this->*(Intern[i]))(target);
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
    }
    return 0;
}