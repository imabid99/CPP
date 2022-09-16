/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/15 18:52:54 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
    	Intern intern1;
    	Form *rtn;

    	rtn = intern1.makeForm("robotomy request", "mjung");
    //	rtn = intern1.makeForm("wrongForm", "mjung");
    	std::cout << rtn->getName() << std::endl;
    	// std::cout << rtn->getTarget() << std::endl;

    	std::cout << *rtn << std::endl;
    }
    catch (std::exception & e)
    {
    	std::cerr << e.what() << std::endl;
    }
    
    return (0);
}