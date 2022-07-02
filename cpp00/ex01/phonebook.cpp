/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:14:26 by imabid            #+#    #+#             */
/*   Updated: 2022/07/02 15:34:32 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.hpp"

std::string	teen_char(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return str;
}
void    Phonebook::print_contact()
{
	std::cout << std::string(61, '-') << std::endl;
			std::cout << "|"
				<< std::setw(14)  << "Index" << "|"
				<< std::setw(14)  << "First Name" << "|"
				<< std::setw(14)  << "Last Name" << "|"
				<< std::setw(14)  << "Nickname" << "|" << std::endl;
			std::cout << std::string(61, '-') << std::endl;
			for (int i = 0; (i < nbr_contact && contact[i].r_fistname() != "") ; i++){
			std::cout << "|"
				<< std::setw(14) << i + 1 << "|"
				<< std::setw(14) << teen_char(contact[i].r_fistname()) << "|"
				<< std::setw(14) << teen_char(contact[i].r_lastname()) << "|"
				<< std::setw(14) << teen_char(contact[i].r_nickname()) << "|" << std::endl;
			}
			std::cout << std::string(61, '-') << std::endl;
}

int	no_par(Contact *contact,int i)
{
	if(contact[i].r_fistname() != "" && contact[i].r_lastname()  != "" && contact[i].r_nickname() != ""
	&& contact[i].r_phonenumber() != ""
	&& contact[i].r_darkestsecret() != "")
		return 1;
	return 0;
}
void    Phonebook::add_contact()
{
	static int i = 0;
	contact[i].new_contact();
	if (no_par(contact,i))
	{
		if(nbr_contact < 8)
			nbr_contact++;
		i++;
	}
	if (i == 8)
		i = 0;
}
int	is_number(std::string str)
{
	int i = 0;
	if(!str[0])
		return 0;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}
void   Phonebook::index_print()
{
	std::string id;
	int index = 0;

	std::cout << std::endl << "Enter what index you need : ";
	if(!getline(std::cin,id))
		return ;
	if(is_number(id))
		index = stoi(id);
	index--;
	if(index < 0 || index >= nbr_contact)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	std::cout << 
			"first name : "<< contact[index].r_fistname() << std::endl
			<< "last name : " << contact[index].r_lastname() << std::endl
			<< "nick name : " << contact[index].r_nickname() << std::endl
			<< "Phone number : " << contact[index].r_phonenumber() << std::endl
			<< "darkest secret : " << contact[index].r_darkestsecret() << std::endl;
}