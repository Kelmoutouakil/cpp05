/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:39:26 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/02 13:21:14 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include<iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &obj);
        Intern& operator=(const Intern& obj);
        AForm* Shrubbery(std::string& t);
        AForm* Robotomy(std::string& t);
        AForm*  Presidential(std::string& t);
       AForm *makeForm(std::string n,std::string t);
};




#endif