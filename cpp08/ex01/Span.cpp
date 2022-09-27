/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:24:10 by imabid            #+#    #+#             */
/*   Updated: 2022/09/27 11:12:30 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : nb(0)
{}

Span::Span(unsigned int n)
{
    this->nb = n;
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
    	this->nb = other.nb;
    }
    return (*this);
};
int  &Span::operator[](unsigned int ind)
{
    if(ind >= this->nb || ind >= vec.size())
        throw std::out_of_range ("index is out of bounds");
    else
        return this->vec[ind];
}

void    Span::addNumber(int nB)
{
    if(vec.size() < this->nb)
        vec.push_back(nB);
    else
        throw "9ad hadi asi imad";
}
int Span::shortestSpan(void){
    if(vec.size() < 2)
        throw "9ad hadi asi imad";
    else{
        return ((*std::max_element(vec.begin(), vec.end())) - (*std::min_element(vec.begin(), vec.end())));
    }
}
int Span::longestSpan(void){
    if(vec.size() < 2)
        throw "9ad hadi asi imad";
    else
        return ((*std::max_element(vec.begin(), vec.end())) - (*std::min_element(vec.begin(), vec.end())));
}

Span::~Span()
{
}