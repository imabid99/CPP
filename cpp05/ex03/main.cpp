/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 10:14:03 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Bureaucrat imad("imad", 100);
		
		Intern form;
		Form *Azol = form.makeForm("shrubbery creation", "Azol");
        std::cout << Azol->getName() << std::endl;
        Azol->beSigned(imad);
		imad.signForm(*Azol);
		imad.executeForm(*Azol);
    }
        catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat abid("abid", 40);
		
		Intern form;
		Form *Ayour = form.makeForm("robotomy request", "Ayour");
        std::cout << Ayour->getName() << std::endl;
        Ayour->beSigned(abid);
	    abid.signForm(*Ayour);
		abid.executeForm(*Ayour);
    }
        catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat imabid("imabid", 3);
		
		Intern form;
		Form *Tafokt = form.makeForm("presidential pardon", "Tafokt");
        std::cout << Tafokt->getName() << std::endl;
        Tafokt->beSigned(imabid);
	    imabid.signForm(*Tafokt);
		imabid.executeForm(*Tafokt);
    }
        catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}