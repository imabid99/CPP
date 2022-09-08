/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:14:41 by imabid            #+#    #+#             */
/*   Updated: 2022/09/08 13:38:11 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main()
{

	ClapTrap clap("imad");
	ScavTrap scap("abid");
	FragTrap frap("imabid");
	
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

	scap.attack("imabid");
	frap.takeDamage(20);
	frap.highFivesGuys();

	std::cout << std::endl;
	
	return 0;
}
