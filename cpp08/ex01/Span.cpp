/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:24:10 by imabid            #+#    #+#             */
/*   Updated: 2022/09/27 16:46:09 by imabid           ###   ########.fr       */
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
        throw Span::NoSpace();
}
int Span::shortestSpan(void){
    if(vec.size() < 2)
        throw Span::noSpan();
    else{
        int min;
        int m;
        std::vector<int> vec1 = vec;
        std::sort(vec1.begin(),vec1.end());
        min = vec1[1] - vec1[0];
        for (size_t i = 1; i < vec1.size(); i++)
        {
            if(min < (vec1[i+1] - vec1[i]))
                m = min;
            else
                min = (vec1[i+1] - vec1[i]);
        }
        return m;
    }
}
int Span::longestSpan(void){
    if(vec.size() < 2)
        throw Span::noSpan();
    else
        return ((*std::max_element(vec.begin(), vec.end())) - (*std::min_element(vec.begin(), vec.end())));
}

Span::~Span()
{
}