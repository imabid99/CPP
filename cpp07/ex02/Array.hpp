/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:20:32 by imabid            #+#    #+#             */
/*   Updated: 2022/09/22 17:27:47 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
    private:
        T *arr;
        unsigned int length;
    public:
    Array() : arr(0), length(0)
    {}
    Array(unsigned int n)
    {
        this->length = n;
        this->arr = new T[n];
    };
    Array(const Array &other)
    {
        *this = other;
    };
    Array &operator=(Array const &other)
    {
	    if (this != &other)
	    {
	    	this->length = other.length;
	    	this->arr = new T[other.length];
	    	for (unsigned int i = 0; i < length; i++)
	    		this->arr[i] = other.arr[i];
	    }
	    return (*this);
	};
    T  &operator[](unsigned int ind)
    {
        if(ind >= this->length)
            throw std::out_of_range ("index is out of bounds");
        else
            return this->arr[ind];
    }
    unsigned int size() const
    {
        return this->length;
    }
    ~Array()
    {
        delete [] arr;
    }
};

#endif