/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 11:07:14 by imabid           ###   ########.fr       */
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
        delete Azol;
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
        delete Ayour;
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
        delete Tafokt;
    }
        catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat hello("hello", 3);
		
		Intern form;
		Form *titrit = form.makeForm("Wrong form", "Titirit");
        std::cout << titrit->getName() << std::endl;
        titrit->beSigned(hello);
	    hello.signForm(*titrit);
		hello.executeForm(*titrit);
        delete titrit;
    }
        catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}