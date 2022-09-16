/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:24:19 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 10:13:46 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form(Target, 145, 137), target(Target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
     *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if(this != &other)
    {
        this->target= other.target;
    }
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(0));
    int a = rand();
    if(executor.getGrade() <= 72 && executor.getGrade() <= 45)
    {
        if(a % 2)
            std::cout << this->target << " has been robotomized successfull" << std::endl;
        else
            std::cout << this->target << " has been failed to robotomized" << std::endl;
    }
    else 
        throw Form::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm()
{}