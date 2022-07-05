/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:09:14 by imabid            #+#    #+#             */
/*   Updated: 2022/07/05 10:55:56 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
    private:
    std::string name;
    Weapon &w;
    public:
    void    attack();
    HumanA(std::string n_name, Weapon &w_c);
    ~HumanA();
}

#endif