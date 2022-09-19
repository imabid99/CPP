/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:40:08 by imabid            #+#    #+#             */
/*   Updated: 2022/09/19 20:04:21 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <time.h>
#include <iostream>
#include <string>

class Base
{
    public:
    virtual ~Base();
};
class A:public Base{};
class B:public Base{};
class C:public Base{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif