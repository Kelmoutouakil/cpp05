/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:39:37 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/02 13:28:47 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
 
Intern::Intern()
{
    std::cout<< "Intern 's defaault constructor is called"<< std::endl;
}

Intern ::Intern(const Intern& obj)
{
    std::cout<<"Intern 'scopy constructor is called"<< std::endl;
    *this = obj;
}

Intern & Intern:: operator=(const Intern& obj)
{
    (void)obj;
    return(*this);
}

Intern::~Intern()
{
    std::cout<<"default destructor is called"<<std::endl;
}

int findForm(std::string& t)
{
    std::string tab[3]={"robotomy request","shrubbery creation","presidential pardon"};
   for(int i = 0;i < 3;i++)
    { 
        if(tab[i] == t)
         return(i);
    }
    return(-1);
}

AForm* Intern::Shrubbery(std::string& t)
{
    return new ShrubberyCreationForm(t);
}
AForm* Intern::Robotomy(std::string& t)
{
    return new RobotomyRequestForm(t);
}
AForm* Intern:: Presidential(std::string& t)
{
    return new PresidentialPardonForm(t);
}

AForm *Intern::makeForm(std::string n,std::string t)
{
    int form = findForm(n);
    AForm *createdForm = NULL;
   AForm *(Intern:: *func[])(std::string&) = {&Intern::Shrubbery, &Intern::Robotomy, &Intern::Presidential};

    switch (form)
    {
    case 0:
        createdForm = (this->*func[0])(t);
        std::cout << "Intern creates " << t << std::endl;
        break;
    case 1:
        createdForm = (this->*func[1])(t);
        std::cout << "Intern creates " << t << std::endl;
        break;
    case 2:
        createdForm = (this->*func[2])(t);
        std::cout << "Intern creates " << t << std::endl;
        break;
    default:
        std::cerr << "Form type not recognized." << std::endl;
        break;
    }
    return(createdForm);
}