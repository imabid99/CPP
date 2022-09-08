/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:51:00 by imabid            #+#    #+#             */
/*   Updated: 2022/09/08 13:38:20 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{

	ClapTrap clap("imad");
	ScavTrap scap("abid");

	std::cout << std::endl;
	
	clap.attack("abid");
	scap.takeDamage(0);
	scap.beRepaired(20);
	
	std::cout << std::endl;
	
	scap.guardGate();
	scap.attack("imad");
	clap.takeDamage(20);
	clap.beRepaired(20);
	
	std::cout << std::endl;

	return 0;
}