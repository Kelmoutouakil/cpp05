/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:49:43 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:40:08 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string n,int a,int b):name(n),gradeSign(a),gradeExec(b)
{
    if(gradeExec < 1 || gradeSign < 1)
        throw GradeTooHighException();
    if(gradeExec > 150 || gradeSign > 150)
        throw GradeTooLowException();
    isSigned = false;
    std::cout<< "Form 's constructor parametrized is called" << std::endl;
}

Form ::Form(const Form& obj) :name(obj.name),gradeSign(obj.gradeSign),gradeExec(obj.gradeExec)
{
    std::cout<<" Copy constructor called"<<std::endl;
    *this = obj;
}

Form& Form:: operator=(const Form& obj)
{
    std::cout<<"copy assignemet operator is called"<<std::endl;
    if(this != &obj)
    {
       isSigned = obj.isSigned;
    }
    return(*this);
}

Form::Form():name("default"),gradeSign(5),gradeExec(5)
{
    std::cout<<" Form 's default constructor called" << std::endl;
    isSigned = false;
}

Form::~Form()
{
    std::cout<< " Form 's ddestructor called"<<std::endl;
}

 const char* Form:: GradeTooHighException :: what() const throw() 
{
    return "Grade is too high";
}

 const char* Form:: GradeTooLowException :: what() const throw() 
{
    return "Grade is too low";
}

const std::string& Form:: getName()const
{
    return(name);
}

bool Form::getSigned() const
{
    return isSigned;
}
 int Form::getGradeExec() const
 {
    return gradeExec;
 }
int Form::getGradeSign()const
{
   return(gradeSign); 
}

void  Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= gradeSign)
        isSigned = true;
    else 
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const Form& F)
 {
    output << F.getName() << std::endl <<F.getSigned() << "\n" << F.getGradeSign() << "\n" << F.getGradeExec() << "\n";   ;
        return output;
 }