/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 10:36:10 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{
	try
    {
        Form *form = new ShrubberyCreationForm("ShrubberyCreationForm");
        Bureaucrat bureaucrat("imad", 40);
        form->beSigned(bureaucrat);
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	std::cout << std::endl;
    
    try
    {
        Form *form1 = new RobotomyRequestForm("RRobotomyrequest");
        Bureaucrat bureaucrat1("abid", 45);
        form1->beSigned(bureaucrat1);
        bureaucrat1.signForm(*form1);
        bureaucrat1.executeForm(*form1);
        delete form1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	std::cout << std::endl;
    
    try
    {
        Form *form2 = new PresidentialPardonForm("PresidentialPardon");
        Bureaucrat bureaucrat2("imabid", 5);
        form2->beSigned(bureaucrat2);
        bureaucrat2.signForm(*form2);
        bureaucrat2.executeForm(*form2);
        delete form2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}