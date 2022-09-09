/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:53:46 by imabid            #+#    #+#             */
/*   Updated: 2022/09/09 18:54:14 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &other);
	    Brain &operator=(const Brain &other);
        ~Brain();
};

#endif