/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:26:14 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:37:09 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm(): AForm("Robotomy",72,45)
{
     std::cout << "Default constructor is called"<< std::endl;
     target="default";
     setSigned(false);
}

PresidentialPardonForm ::PresidentialPardonForm(std::string t) : AForm("Robotomy",72,45)
{
    std::cout<<" Presidential 's constructor parametrized is called "<< std::endl;
    target = t;
    setSigned(false);
}

 std::string PresidentialPardonForm:: getTarget()const
{
    return target;
}

PresidentialPardonForm :: ~PresidentialPardonForm()
{
    std::cout<< "  Presidential 's destructor called"<< std::endl;
}

PresidentialPardonForm:: PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj)
{  
    std::cout<< "  Presidential 's copy constructor called"<< std::endl;
    *this = obj;
}
               
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if(this != &obj)
    {
        target = obj.target;
       setSigned(obj.getSigned());
    }
    return(*this);
}
void PresidentialPardonForm:: execute(Bureaucrat const & executor) const
{
   if(!getSigned())
        throw AForm::FormNotSignedException();
    if ( executor.getGrade() >=  getGradeExec())
        throw AForm::GradeTooLowException();
    std::cout<< target << " pardoned by Zaphod Beeblebroxe "<< std ::endl;
   
}