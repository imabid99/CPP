/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:37:04 by imabid            #+#    #+#             */
/*   Updated: 2022/09/27 16:48:43 by imabid           ###   ########.fr       */
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
            // khss chi 7ajja hna
            vec.insert(vec.end(), ibegin, iend);
        }
        class	NoSpace: public std::exception{
		    const char * what () const throw ()
		    {
		    	return "No space left";
		    }
		};
        class	noSpan: public std::exception{
		    const char * what () const throw ()
		    {
		    	return "No span";
		    }
		};
        // class	NoSpace: public std::exception{
		//     const char * what () const throw ()
		//     {
		//     	return "No space left";
		//     }
		// };
        int    shortestSpan();
        int    longestSpan();
        ~Span();
};

#endif