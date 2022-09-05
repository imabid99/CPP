/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:51:00 by imabid            #+#    #+#             */
/*   Updated: 2022/09/05 15:00:53 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap im("imad");
    ClapTrap i;

	im.attack("Somting!");
	im.takeDamage(7);
	im.beRepaired(3);
    im.attack("i");
	im.takeDamage(7);
	im.beRepaired(3);
}