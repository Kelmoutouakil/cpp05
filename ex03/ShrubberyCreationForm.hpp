/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:36:39 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:36:48 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include<iostream>
#include<fstream>

class ShrubberyCreationForm :public AForm
{
    private:
         std::string   target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string t);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
        void execute(Bureaucrat const & executor) const;
         std::string  getTarget()const;
};


#endif