/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:24:20 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/28 11:30:53 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include<iostream>
#include <stdexcept>
#include "Form.hpp"
class Form;
class Bureaucrat
{
    private:
        const std::string  name;
        int grade;
       
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        Bureaucrat(std::string h,int i);
        void    setGrade(int i);
        const std::string getName()const;
        int getGrade()const;
        void    IncremetGrade();
        void    DecrementGrade();
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
        void signForm(Form& F);
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat);

#endif