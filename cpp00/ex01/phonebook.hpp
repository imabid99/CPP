/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:14:29 by imabid            #+#    #+#             */
/*   Updated: 2022/07/02 11:14:30 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class Phonebook{
    private:
    Contact contact[8];
    int nbr_contact;

    public:
    static int phb_nbr;
    void    index_print();
    void    print_contact();
    void    add_contact();
};