/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:01:21 by imabid            #+#    #+#             */
/*   Updated: 2022/09/28 18:21:35 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <algorithm>
#include <stack>
#include <deque>
#include <iostream>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
    MutantStack(){};
    MutantStack(MutantStack const &other)
    {
        *this = other;
    };
    MutantStack &operator=(MutantStack const &other)
    {
        if (this != &other)
	    {
	    	this->c = other.c;
	    }
	    return (*this);
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator    begin() 
    {
        return this->c.begin();
    };
    
    iterator    end() 
    {
        return this->c.end();
    };
    
    const_iterator  cbegin() const {
        return this->c.cbegin();
    }
    
    const_iterator  cend() const {
        return this->c.cend();
    }
    reverse_iterator    rbegin() 
    {
        return this->c.rbegin();
    };
    reverse_iterator    rend() 
    {
        return this->c.rend();
    };
    
    const_reverse_iterator    crbegin() 
    {
        return this->c.crbegin();
    };
    const_reverse_iterator    crend() 
    {
        return this->c.crend();
    };
    ~MutantStack(){};
};

#endif