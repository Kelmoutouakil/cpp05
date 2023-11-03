/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:04:05 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/02 10:30:50 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
try
{

    Bureaucrat bureaucrat("Alice",5);
    // ShrubberyCreationForm shrubberyForm("home");
    RobotomyRequestForm robotomyForm("office");
    
    // PresidentialPardonForm pardonForm("friend");

    // shrubberyForm.beSigned(bureaucrat);
     robotomyForm.beSigned(bureaucrat);
    // pardonForm.beSigned(bureaucrat);

    // bureaucrat.executeForm(shrubberyForm);
    robotomyForm.execute(bureaucrat);
    // bureaucrat.executeForm(pardonForm);
    }
    catch(std::exception&  e)
    {
        std::cerr << e.what() << '\n';
    }
}