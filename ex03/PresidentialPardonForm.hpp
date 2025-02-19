/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:31:46 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:36:32 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
class PresidentialPardonForm : public AForm
{
  private:
       std::string   target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string t);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
        void execute(Bureaucrat const & executor) const;
         std::string  getTarget()const;
};



#endif