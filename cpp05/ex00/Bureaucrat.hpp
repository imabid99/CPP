/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:47 by imabid            #+#    #+#             */
/*   Updated: 2022/09/13 13:30:10 by imabid           ###   ########.fr       */
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
        Bureaucrat(std::string Name, int Grade);
        Bureaucrat(const Bureaucrat &other);
	    Bureaucrat &operator=(const Bureaucrat &other);
        std::string getName();
        int getGrade();
        ~Bureaucrat();
};

#endif