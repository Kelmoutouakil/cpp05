/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:45:47 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:40:45 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool  isSigned;;
        const int gradeSign;
        const int gradeExec;
    public:
        Form(std::string n,int a,int b);
        Form();
        ~Form();
        Form(const Form& obj);
        Form&  operator=(const Form& obj);
        const std::string& getName()const;
        bool getSigned()const;
        int getGradeSign()const;
        int getGradeExec()const;
        void  beSigned(const Bureaucrat& b);
        class GradeTooHighException : public std::exception 
        {
            public :
                const char* what() const throw() ;
        };
        class GradeTooLowException : public std::exception 
        {
            public :
                const char* what() const throw() ;
        };
        
};

std::ostream& operator<<(std::ostream& output, const Form& F);

#endif 