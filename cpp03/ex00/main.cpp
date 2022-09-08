/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:50:51 by imabid            #+#    #+#             */
/*   Updated: 2022/09/08 15:08:37 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{

	ClapTrap clap("imad");

	std::cout << std::endl;
	
	clap.attack("abid");
	clap.takeDamage(0);
	clap.beRepaired(20);
	
	std::cout << std::endl;
	
	clap.attack("imabid");
	clap.takeDamage(20);
	clap.beRepaired(5);
	
	std::cout << std::endl;

	return 0;
}