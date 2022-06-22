/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:21:13 by imabid            #+#    #+#             */
/*   Updated: 2022/05/16 13:21:39 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// using namespace std;
int main(int ac,char **av)
{   
    if(ac > 1)
    {
        int i = 0;
        while(av[++i])
        {
            int j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 'a' && av[i][j] <= 'z')
                    std::cout << (char)toupper(av[i][j]);
                j++;
            }
            if(av[i + 1] != '\0')
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
