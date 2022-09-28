/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:01:21 by imabid            #+#    #+#             */
/*   Updated: 2022/09/28 16:40:57 by imabid           ###   ########.fr       */
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
class MutantStack : std::stack<T>
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
    
    const_iterator  begin() const {
        return this->c.begin();
    }
    
    const_iterator  end() const {
        return this->c.end();
    }
    reverse_iterator    rbegin() 
    {
        return this->c.rbegin();
    };
    reverse_iterator    rend() 
    {
        return this->c.rend();
    };
    const_reverse_iterator    rbegin() 
    {
        return this->c.rbegin();
    };
    const_reverse_iterator    rend() 
    {
        return this->c.rend();
    };
    ~MutantStack(){};
};

#endif