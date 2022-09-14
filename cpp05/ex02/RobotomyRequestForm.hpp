/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:24:16 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 18:25:39 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string Target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
	    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        void    execute(Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};

#endif