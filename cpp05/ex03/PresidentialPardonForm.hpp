/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:55:47 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 18:22:43 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
	    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        void    execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm();
};

#endif