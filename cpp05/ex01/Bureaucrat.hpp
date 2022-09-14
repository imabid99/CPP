/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:47 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 14:26:58 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

#include <iostream>

class Bureaucrat
{
    private:
        std::string const  name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string Name, int Grade);
        Bureaucrat(const Bureaucrat &other);
	    Bureaucrat &operator=(const Bureaucrat &other);
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        std::string getName() const;
        int getGrade() const;
        void    inc();
        void    dec();
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& out ,const Bureaucrat& br);

#endif