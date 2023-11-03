/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:35:34 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/02 10:29:25 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm():  AForm("Robotomy",72,45)
{
     std::cout << "Default constructor is called"<< std::endl;
     target="default";
}

RobotomyRequestForm ::RobotomyRequestForm(std::string t) : AForm("Robotomy",72,45)
{
    std::cout<<" Robotomy 's constructor parametrized is called "<< std::endl;
    setSigned(false);
    target = t;
}

 std::string RobotomyRequestForm:: getTarget()const
{
    return target;
}

RobotomyRequestForm :: ~RobotomyRequestForm()
{
    std::cout<< " Robotomy 's destructor called"<< std::endl;
}

RobotomyRequestForm:: RobotomyRequestForm(const RobotomyRequestForm& obj) :  AForm(obj)
{  
    std::cout<< " Robotomy 's copy constructor called"<< std::endl;
    *this = obj;
}
               
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if(this != &obj)
    {
        target = obj.target;
       setSigned(obj.getSigned());
    }
    return(*this);
}

void RobotomyRequestForm:: execute(Bureaucrat const & executor) const
{
    (void)executor;
   if(!getSigned())
        throw AForm::FormNotSignedException();
    if ( executor.getGrade() > getGradeExec())
        throw AForm::GradeTooLowException();
    std::cout<<" Make some drilling noises..."<< std::endl;
    std::srand(time(NULL));
    int r = std::rand()% 2;    
    if (r == 0)
         std::cout<< target << " has been robotomized successfully ."<< std ::endl;
    else
        std::cout<<" the robotomy failed."<< std::endl;
}