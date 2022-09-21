/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:10:50 by imabid            #+#    #+#             */
/*   Updated: 2022/09/21 10:57:37 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <string.h>

int main()
{
    Base *p;

	p = generate();

	std::cout << "This is : POINTER" << std::endl;
	identify(p);

	std::cout << "This is : REFERENCE" << std::endl;
	identify(*p);

	delete p;
	return 0;
}