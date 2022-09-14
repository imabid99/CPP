/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:44 by imabid            #+#    #+#             */
/*   Updated: 2022/09/13 13:32:54 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat() : name("Bureaucrat") , grade(150)
// {

// }
Bureaucrat::Bureaucrat(std::string Name, int Grade) : name("Bureaucrat") , grade(150)
{
    this->name = Name;
    this->grade = Grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat &other) :name(other.name)
{
     *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
    {
        // this->name= other.name;
        this->grade = other.grade;
    }
    return *this;
}

int Bureaucrat::getGrade() 
{
    return this->grade;
}

std::string Bureaucrat::getName() 
{
    return this->name;
}


Bureaucrat::~Bureaucrat()
{}

