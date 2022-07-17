/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:05:21 by imabid            #+#    #+#             */
/*   Updated: 2022/07/17 18:23:06 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac,char **av)
{
    (void)ac;
    std::string filename;
    std::string nfilename;
    
    std::string s1;
    std::string s2;
    std::string line;
    std::ifstream min;
    std::ofstream ila;


    if(ac != 4)
    {
        std::cout << "ERROR : Number of args" << std::endl;
        return 0;
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    nfilename = filename.append(".replace");
    // printf("%s",nfilename);
    min.open(av[1]);
    if(min.fail())
    {
        std::cout << "file cannot be opened." << std::endl;
        return 1;
    }    
    ila.open(nfilename);
    if(ila.fail())
    {
        std::cout << "file cannot be opened." << std::endl;
        return 1;
    }   
    // std::cout << nfilename << std::endl;
    // min.open("hhh");
    // min << "u can" << std::endl;
    // min << "u can" << std::endl;
 
    // while(min >> line)
    // min >> line;
    // std::cout << line << std::endl;
    // printf("hahaha");
    // std::cout << min << std::endl;
    while(getline(min,line))
    {
        ila << line << std::endl;
    }
    min.close();
    ila.close();
    return 0;
}