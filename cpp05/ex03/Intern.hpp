/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:54:24 by imabid            #+#    #+#             */
/*   Updated: 2022/09/15 18:20:27 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
	    Intern &operator=(const Intern &other);
        Form*   makeFormPresidentialPardonForm(std::string target);
        Form*   makeFormRobotomyRequestForm(std::string target);
        Form*   makeFormShrubberyCreationForm(std::string target);
        Form*   makeForm(std::string name, std::string target);
        typedef Form* (Intern::*INTERNPTR)(std::string target);
        ~Intern();
};


#endif