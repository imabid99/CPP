/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:05:21 by imabid            #+#    #+#             */
/*   Updated: 2022/07/18 15:45:02 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>

int main(int ac,char **av)
{
    std::string filename;
    std::string nfilename;
    std::string s1;
    std::string s2;
    std::ifstream min;
    std::ofstream ila;
    std::string stt;
    std::string save;


    if(ac != 4)
    {
        std::cout << "ERROR : Number of args" << std::endl;
        return 0;
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    nfilename = filename.append(".replace");
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
    while(getline(min,stt))
    {
        save += stt;
        save += '\n';   
    }
    int p = 0;
    while((p = save.find(s1)) != - 1)
    {      
        save.erase(p, s1.length());
        save.insert(p,s2);
    }
    ila << save;
    min.close();
    ila.close();
    return 0;
}