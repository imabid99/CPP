/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:11:27 by imabid            #+#    #+#             */
/*   Updated: 2022/06/27 17:39:55 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"
void	phb_des()
{
	std::cout << std::endl;
	std::cout <<"  ___ _  _  ___  _  _ ___ ___  ___   ___  _  __"<< std::endl;
	std::cout <<" | _ \\ || |/ _ \\| \\| | __| _ )/ _ \\ / _ \\| |/ /"<< std::endl;
	std::cout <<" |  _/ __ | (_) | .` | _|| _ \\ (_) | (_) | ' < "<< std::endl;
	std::cout <<" |_| |_||_|\\___/|_|\\_|___|___/\\___/ \\___/|_|\\_\\ "<< std::endl;
	std::cout <<"                                               "<< std::endl;	
}
void    go_first()
{
	std::cout << "𝕌𝕤𝕖 𝕠𝕟𝕖 𝕠𝕗 𝕥𝕙𝕚𝕤 𝕔𝕠𝕞𝕞𝕒𝕟𝕕𝕤:" << std::endl;
	std::cout << std::endl;
	std::cout << "𝔸𝔻𝔻\t" << ": Add a new contact" << std::endl; 
	std::cout << "𝕊𝔼𝔸ℝℂ𝕙\t" << ": Display contacts" << std::endl; 
	std::cout << "𝔼𝕏𝕀𝕋\t" << ": Exit the phonebook" << std::endl; 
	std::cout << std::endl;
}

int main()
{
	std::string cmd;
	Phonebook ph_b;
	
	phb_des();
	go_first();
	while(1)
	{
		std::cout << "-> ";
		if(!getline(std::cin, cmd))
			break;
		if(cmd == "ADD")
		{
			ph_b.add_contact();
		}
		else if(cmd == "SEARCH")
		{
			ph_b.print_contact();
			ph_b.index_print();
		}
		else if(cmd == "EXIT")
		{
			std::cout << "Exit the phonebook" << std::endl;
			break;
		}
		else
		{
			std::cout <<  "Invalid command" << std::endl;
			go_first();
		}
	};
}