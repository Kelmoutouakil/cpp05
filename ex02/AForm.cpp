/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:49:43 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:39:48 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string n,int a,int b):name(n),gradeSign(a),gradeExec(b)
{
    if(gradeExec < 1 || gradeSign < 1)
        throw GradeTooHighException();
    if(gradeExec > 150 || gradeSign > 150)
        throw GradeTooLowException();
    isSigned = false;
    std::cout<< "AForm 's constructor parametrized is called" << std::endl;
}

AForm ::AForm(const AForm& obj) :name(obj.name),gradeSign(obj.gradeSign),gradeExec(obj.gradeExec)
{
    std::cout<<" Copy constructor called"<<std::endl;
    *this = obj;
}

AForm& AForm:: operator=(const AForm& obj)
{
    std::cout<<"copy assignemet operator is called"<<std::endl;
    if(this != &obj)
    {
       isSigned = obj.isSigned;
    }
    return(*this);
}
void AForm::setSigned(bool i)
{
    isSigned = i;
}
AForm::AForm():name("default"),gradeSign(5),gradeExec(5)
{
    std::cout<<" AForm 's default constructor called" << std::endl;
    isSigned = false;
}
AForm::~AForm()
{
    std::cout<< " AForm 's ddestructor called"<<std::endl;
}
 const char* AForm:: GradeTooHighException :: what() const throw() 
{
    return "Grade is too high";
}
 const char* AForm:: GradeTooLowException :: what() const throw() 
{
    return "Grade is too low";
}

const std::string& AForm:: getName()const
{
    return(name);
}

bool AForm::getSigned() const
{
    return isSigned;
}
 int AForm::getGradeExec() const
 {
    return gradeExec;
 }
int AForm::getGradeSign()const
{
   return(gradeSign); 
}

void  AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= gradeSign)
        isSigned = true;
    else 
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const AForm& F)
 {
    output << F.getName() << std::endl <<F.getSigned() << "\n" << F.getGradeSign() << "\n" << F.getGradeExec() << "\n";   ;
        return output;
 }

 const char* AForm:: FormNotSignedException :: what() const throw() 
{
    return "Form is not sigend";
}
