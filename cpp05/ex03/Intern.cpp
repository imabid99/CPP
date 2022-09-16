/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:54:27 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 09:41:46 by imabid           ###   ########.fr       */
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
    for(i = 0; i < 3; i++)
        if (name.compare(names[i]) == 0)
            break ;
    switch(i)
    {
        std::cout << i <<std::endl;
        case 0:
            return (this->*(Intern[i]))(target);
        case 1:
            return (this->*(Intern[i]))(target);
        case 2:
            return (this->*(Intern[i]))(target);
        default :
            std::cout << "No Form with this name!!" << std::endl;
    }
    return 0;
}