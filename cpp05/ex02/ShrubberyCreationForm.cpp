/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:24:21 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 18:54:15 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : target(Target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
     *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if(this != &other)
    {
        this->target= other.target;
    }
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream outfile;
    if(executor.getGrade() <= 145 && executor.getGrade() <= 137)
    {
        outfile.
    }
    else 
        throw Form::GradeTooLowException();
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}