/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:47:59 by imabid            #+#    #+#             */
/*   Updated: 2022/07/04 13:07:18 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
    private:
    std::string type;
    public:
    Weapon(std::string t_type);
    ~Weapon();
    std::string getType();
    void    setType(std::string n_type);
}

#endif
