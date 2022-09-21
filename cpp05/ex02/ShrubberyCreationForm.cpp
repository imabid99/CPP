/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:24:21 by imabid            #+#    #+#             */
/*   Updated: 2022/09/21 14:16:43 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form(Target, 147, 137), target(Target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
     *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if(this != &other)
    {
        this->target= other.target;
    }
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream outfile;
    if(executor.getGrade() <= 145 && executor.getGrade() <= 137)
    {
        outfile.open(this->target + "_shrubbery");
        outfile <<      "                                                         .           "          << std::endl;
        outfile <<      "                                              .         ;           "           << std::endl;
        outfile <<      "                 .              .              ;%     ;;               "        << std::endl; 
        outfile <<      "                   ,           ,                :;;%;  %;                "      << std::endl;    
        outfile <<      "                    :         ;                   :;%;'     .,         "        << std::endl; 
        outfile <<      "           ,.        %;     %;            ;        %;'    ,;          "         << std::endl;
        outfile <<      "             ;       ;%;   %;        ,     %;    ;%;    ,%'       "             << std::endl;
        outfile <<      "              %;       ;%; %;      ,  ;       %;  ;%;   ,%;'             "      << std::endl;   
        outfile <<      "               ;%;      %;        ;%;        %; ;%;  ,%;'               "       << std::endl;   
        outfile <<      "                `%;.     ;%;     %;'         `;;%;;%;'                 "        << std::endl;   
        outfile <<      "                 `:;%.    ;;%. %@;        %; ;@%;;%'                   "        << std::endl;
        outfile <<      "                    `:%;.  :;bd%;          %;@%;'         "                     << std::endl;
        outfile <<      "                      `@%:.  :;%.         ;@@%;'      "                         << std::endl;
        outfile <<      "                        `@%.  `;@%.      ;@@%;             "                    << std::endl;
        outfile <<      "                          `@%. `@%;    ;@@%;         "                          << std::endl;
        outfile <<      "                            ;@%. :@%;  %@@%;          "                         << std::endl;
        outfile <<      "                              %@bd;%;bd%;:;       "                             << std::endl;
        outfile <<      "                                #@.##%:;;    "                                  << std::endl;
        outfile <<      "                                %@@##%::; "                                     << std::endl;
        outfile <<      "                                %@@@%(o);      . '         "                    << std::endl;
        outfile <<      "                                %@@@o%;:(.,'             "                      << std::endl;
        outfile <<      "                            `.. %@@@o%::;             "                         << std::endl;
        outfile <<      "                               `)@@@o%::;             "                         << std::endl;
        outfile <<      "                                %@@(o)::;         "                             << std::endl;
        outfile <<      "                               .%@@@@%::;             "                         << std::endl;
        outfile <<      "                               ;%@@@@%::;.            "                         << std::endl;
        outfile <<      "                              ;%@@@@##:;;;.   "                                 << std::endl;
        outfile <<      "                          ...;%@@@@@##:;;;;,..        "                         << std::endl;
        
    }
    else 
        throw Form::GradeTooLowException();
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}