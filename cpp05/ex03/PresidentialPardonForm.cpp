/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:23:08 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 17:23:12 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form(Target, 145, 137), target(Target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
     *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if(this != &other)
    {
        this->target= other.target;
    }
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() <= 25 && executor.getGrade() <= 5)
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else 
        throw Form::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm()
{}