/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:44 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 16:24:38 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("") , grade(20)
{

}
Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name) , grade(Grade)
{
    if(this->grade < 1)
    {
        std::cout << " hello ";
        throw Bureaucrat::GradeTooHighException();
    }
    else if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


Bureaucrat::Bureaucrat(const Bureaucrat &other) :name(other.name)
{
     *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
    {
        this->grade = other.grade;
    }
    return *this;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade : Too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade : Too high";
}

void    Bureaucrat::inc()
{
    this->grade--;
    if(this->getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
} 

void    Bureaucrat::dec()
{
    this->grade++;
    if(this->getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}

void			Bureaucrat::signForm(Form f)
{
    if(f.getSign())
    {
        std::cout << this->name << " signed " << f.getName() << std::endl;
    }
    else
    {
        std::cout << this->name << " couldn't sign  " << f.getName() << "Because grade is not high enough " << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out ,const Bureaucrat& br)
{
    out << br.getName() << ",  bureaucrat grade " << br.getGrade() << std::endl;
    return out;
}

Bureaucrat::~Bureaucrat()
{}
