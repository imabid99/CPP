/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:41:57 by imabid            #+#    #+#             */
/*   Updated: 2022/09/28 18:21:40 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    std::cout << "---------iterator--------" << std::endl;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    MutantStack<int> copymun(mstack);
    std::cout << "---------reverse_iterator--------" << std::endl;
    
    MutantStack<int>::reverse_iterator itr = mstack.rbegin();
    MutantStack<int>::reverse_iterator iter = mstack.rend();
    ++itr;
    --itr;
    while (itr != iter)
    {
        std::cout << *itr << std::endl;
        ++itr;
    }
    std::cout << "---------const_iterator--------" << std::endl;
    MutantStack<int>::const_iterator itc = mstack.cbegin();
    MutantStack<int>::const_iterator itec = mstack.cend();
    ++itc;
    --itc;
    while (itc != itec)
    {
        std::cout << *itc << std::endl;
        ++itc;
        // *itc = 42;
    }  
    std::cout << "---------const_reverse_iterator--------" << std::endl;
    MutantStack<int>::const_reverse_iterator itcr = mstack.crbegin();
    MutantStack<int>::const_reverse_iterator itecr = mstack.crend();
    ++itcr;
    --itcr;
    while (itcr != itecr)
    {
        std::cout << *itcr << std::endl;
        ++itcr;
        // *itc = 42;
    }  
    return 0;
}