/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:20:27 by imabid            #+#    #+#             */
/*   Updated: 2022/09/21 18:18:42 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome {
    public: 
    Awesome( void ) : _n( 42 ) { return; } 
    int get( void ) const { return this->_n; } 
    private: 
    int _n; 
}; 
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T > 
void print( T const & x ) 
{ 
    std::cout << x << std::endl; return; 
} 

int main() 
{ 
    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5]; 
    Awesome tab2[5];
    iter( tab, 5, print ); 
    iter( tab2, 5, print ); 
    return 0; 
}