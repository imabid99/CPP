/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 10:53:02 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Form imad("imad", 20, 10);
	Bureaucrat abid("abid", 18);
    try{
		imad.beSigned(abid);
		abid.signForm(imad);
		std::cout << imad;
        std::cout << abid;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    abid.signForm(imad);
	return 0;
}