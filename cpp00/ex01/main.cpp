/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:11:27 by imabid            #+#    #+#             */
/*   Updated: 2022/07/02 11:12:48 by imabid           ###   ########.fr       */
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
	std::cout << "ππ€π π ππ π π π₯πππ€ ππ ππππππ€:" << std::endl;
	std::cout << std::endl;
	std::cout << "πΈπ»π»\t" << ": Add a new contact" << std::endl; 
	std::cout << "ππΌπΈββπ\t" << ": Display contacts" << std::endl; 
	std::cout << "πΌπππ\t" << ": Exit the phonebook" << std::endl; 
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
	};
	return 0;
}