/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:45:47 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:42:18 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool  isSigned;;
        const int gradeSign;
        const int gradeExec;
    public:
        AForm(std::string n,int a,int b);
        ~AForm();
        AForm();
        AForm(const AForm& obj);
        AForm&  operator=(const AForm& obj);
        const std::string& getName()const;
        bool getSigned()const;
        void setSigned(bool i);
        int getGradeSign()const;
        int getGradeExec()const;
        void  beSigned(const Bureaucrat& b) ;
        virtual void execute(Bureaucrat const & executor) const = 0 ;
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
        class FormNotSignedException : public std::exception 
        {
            public :
                const char* what() const throw() ;
        }; 
};

std::ostream& operator<<(std::ostream& output, const AForm& F);

#endif 