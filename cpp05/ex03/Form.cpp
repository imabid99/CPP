/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:03:15 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 09:54:55 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), sign(false) ,sgrade(150),egrade(150)
{

}
Form::Form(std::string Name, int Sgrade, int Egrade) : name(Name) , sign(false) , sgrade(Sgrade) , egrade(Egrade)
{
    if(this->sgrade < 1 || this->egrade < 1)
        throw Form::GradeTooHighException();
    else if(this->sgrade > 150 || this->egrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : name(""),sign(false), sgrade(150),egrade(150)
{
     *this = other;
}
 
Form &Form::operator=(const Form &other)
{
    if(this != &other)
    {
        this->sign = other.sign;
    }
    return *this;
}

bool Form::getSign() const
{
    return this->sign;
}

int Form::getSgrade() const
{
    return this->sgrade;
}

int Form::getEgrade() const
{
    return this->egrade;
}

std::string Form::getName() const
{
    return this->name;
}

void    Form::beSigned(Bureaucrat br)
{
    if(this->getSgrade() >= br.getGrade())
        this->sign = true;
    else
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade : Too low";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade : Too high";
}


std::ostream& operator<<(std::ostream& out ,const Form& br)
{
    out << br.getName() << ",  sign " << br.getSign() << ", Sign Grade " << br.getSgrade() << ", Execute Grade " << br.getEgrade() << std::endl;
    return out;
}


Form::~Form()
{}