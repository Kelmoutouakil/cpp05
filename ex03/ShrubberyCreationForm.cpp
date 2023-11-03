/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:35:45 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:37:36 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm :: ShrubberyCreationForm():  AForm("Shrubbery",145,137)
{
     std::cout << "Default constructor is called"<< std::endl;
     target = "default";
     setSigned(false);
}

ShrubberyCreationForm ::ShrubberyCreationForm(std::string t) : AForm("Shrubbery",145,137)  
{
    std::cout<<" Shrubbery 's constructor parametrized is called "<< std::endl;
    target = t;
    setSigned(false);
}

  std::string ShrubberyCreationForm:: getTarget()const
{
    return target;
}

ShrubberyCreationForm :: ~ShrubberyCreationForm()
{
    std::cout<< " Shrubbery 's destructor called"<< std::endl;
}

ShrubberyCreationForm:: ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm(obj)
{  
    std::cout<< " Shrubbery 's copy constructor called"<< std::endl;
    *this = obj;
}
               
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if(this != &obj)
    {
        target = obj.target;
       setSigned(obj.getSigned());
    }
    return(*this);
}

void ShrubberyCreationForm:: execute(Bureaucrat const & executor) const
{
   if(!getSigned())
        throw AForm::FormNotSignedException();
    if ( executor.getGrade() >=  getGradeExec())
        throw AForm::GradeTooLowException();
    std::ofstream outputfile(target + "_shrubbery");
     
    if(outputfile.is_open())
    {
        outputfile << "    ^\n   ^^^\n  ^^^^^\n ^^^^^^^\n^^^^^^^^^\n   |||"<< std::endl;
    }
    else
        std::cerr<< "Failed to create file" << std::endl;
        
}

