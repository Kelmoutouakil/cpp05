/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:22:02 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/30 10:12:17 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat ::Bureaucrat():name("tona")
{
    std::cout<< "Default costructor called"<<std::endl;
    grade = 2;
}

Bureaucrat ::Bureaucrat(std::string h,int i) : name(h)
{
    std::cout<<"constructor parametrized called\n";
    if( i  < 1)
        throw GradeTooHighException();
    if ( i  > 150 )
        throw  GradeTooLowException();
    grade = i;
}

Bureaucrat ::Bureaucrat(const Bureaucrat& obj) :name(obj.name)
{
    std::cout<<" Copy constructor called"<<std::endl;
    *this = obj;
}

Bureaucrat& Bureaucrat:: operator=(const Bureaucrat& obj)
{
    std::cout<<"copy assignemet operator is called"<<std::endl;
    if(this != &obj)
    {
        grade = obj.grade;
    }
    return(*this);
}

void Bureaucrat::setGrade(int i)
{
    grade = i;
}

int Bureaucrat::getGrade() const
{
    return(grade);    
}

const std::string Bureaucrat:: getName()const
{
    return(name);
}

Bureaucrat::~Bureaucrat()
{
    std::cout<< name <<"'s destructor called"<<std::endl;
}

void Bureaucrat::IncremetGrade()
{
    if( grade - 1 < 1)
        throw GradeTooHighException();
    grade--;

}

void Bureaucrat::DecrementGrade()
{
    if(grade + 1 > 150)
        throw GradeTooLowException();
    grade++;

}
std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat)
 {
    output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
        return output;
 }

 const char* Bureaucrat:: GradeTooHighException :: what() const throw() 
{
    return "Grade is too high";
}
 const char* Bureaucrat:: GradeTooLowException :: what() const throw() 
{
    return "Grade is too low";
}