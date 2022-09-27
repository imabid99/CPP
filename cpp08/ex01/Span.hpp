/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:37:04 by imabid            #+#    #+#             */
/*   Updated: 2022/09/27 09:41:43 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> vec;
        unsigned int nb;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(Span const &other);
        int  &operator[](unsigned int ind);
        void    addNumber(int nB);
        int    shortestSpan();
        int    longestSpan();
        ~Span();
};

#endif