/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:24:24 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 18:58:44 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string Target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
	    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        void    execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};

#endif