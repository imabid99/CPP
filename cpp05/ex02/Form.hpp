/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:50:52 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 19:39:34 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        std::string const  name;
        bool               sign;
        int const          sgrade;
        int const          egrade;
    public:
        Form();
        Form(std::string Name, int Sgrade,int Egrade);
        Form(const Form &other);
	    Form &operator=(const Form &other);
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        virtual void    execute(Bureaucrat const & executor) const = 0;
        std::string getName() const;
        bool        getSign() const;
        int         getSgrade() const;
        int         getEgrade() const;
        void        beSigned(Bureaucrat br);
        virtual ~Form();
};

std::ostream& operator<<(std::ostream& out ,const Form& br);

#endif