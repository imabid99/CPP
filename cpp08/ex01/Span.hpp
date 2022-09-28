/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:37:04 by imabid            #+#    #+#             */
/*   Updated: 2022/09/28 10:56:58 by imabid           ###   ########.fr       */
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
        template <typename T>
        void    addNumber(T ibegin, T iend)
        {
            if(std::distance(ibegin,iend) + vec.size() > this->nb)
                throw Fullvec();
            vec.insert(vec.end(), ibegin, iend);
        }
        class	NoSpace: public std::exception{
		    const char * what () const throw ();
		};
        class	noSpan: public std::exception{
		    const char * what () const throw ();
		};
        class	Fullvec: public std::exception{
		    const char * what () const throw ();
		};
        int    shortestSpan();
        int    longestSpan();
        ~Span();
};

#endif