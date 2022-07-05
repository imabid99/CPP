/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:59:23 by imabid            #+#    #+#             */
/*   Updated: 2022/07/05 19:20:22 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
  private:
    std::string name;
    Weapon *w;
  public:
    void    attack();
    void    setWeapon(Weapon &w_c);
    HumanB(std::string n_name);
    ~HumanB();
};

#endif