/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:24:07 by imabid            #+#    #+#             */
/*   Updated: 2022/05/19 14:45:00 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

void Contact::new_contact()
{
	std::cout << "First Name: ";
	getline(std::cin, firstname);
	std::cout << "Last Name: ";
	getline(std::cin, lastname);
	std::cout << "Nickname: ";
	getline(std::cin, nickname);
	std::cout << "Phone number: ";
	getline(std::cin, phonenumber);
	std::cout << "Darkest secret: ";
	getline(std::cin, darkestsecret);
}
std::string Contact::r_fistname()
{
    return firstname;
}
std::string Contact::r_lastname()
{
    return lastname;
}
std::string Contact::r_nickname()
{
    return nickname;
}
std::string Contact::r_phonenumber()
{
    return phonenumber;
}
std::string Contact::r_darkestsecret()
{
    return darkestsecret;
}
