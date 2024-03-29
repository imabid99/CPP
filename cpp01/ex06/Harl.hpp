/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:42:24 by imabid            #+#    #+#             */
/*   Updated: 2022/07/17 15:36:47 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private:
    void    debug(); 
    void    info(); 
    void    warning(); 
    void    error();
    public:
    Harl();
    ~Harl();
    typedef void (Harl::*HARLPTR)();
    void complain( std::string level );
};
#endif