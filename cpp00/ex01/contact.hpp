/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:16:45 by imabid            #+#    #+#             */
/*   Updated: 2022/07/02 11:14:01 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Contact{
    private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;
    public:
    void    new_contact();
    std::string  r_fistname();
    std::string  r_lastname();
    std::string  r_nickname();
    std::string  r_phonenumber();
    std::string  r_darkestsecret();
};
