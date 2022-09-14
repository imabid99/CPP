/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/13 13:31:41 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



int main()
{
    Bureaucrat b("imad",250);
    std::cout << b.getGrade() << std::endl;
    std::cout << b.getName() << std::endl;
    
    return 0;
}