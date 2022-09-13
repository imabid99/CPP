/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:44 by imabid            #+#    #+#             */
/*   Updated: 2022/09/13 13:20:51 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat") , grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
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
