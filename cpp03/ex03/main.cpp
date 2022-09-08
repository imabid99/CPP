/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:15:05 by imabid            #+#    #+#             */
/*   Updated: 2022/09/08 18:01:29 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap clap("imad");
	ScavTrap scap("abid");
	FragTrap frap("imabid");
	DiamondTrap diap("diamond");

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

	diap.attack("imabid");
	frap.takeDamage(30);
	frap.highFivesGuys();
	diap.whoAmI();
	
	
	std::cout << std::endl;
	
	return 0;
}