/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:30:37 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/03 09:36:41 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm :public AForm
{
    private:
        std::string   target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string t);
        virtual ~RobotomyRequestForm();
       RobotomyRequestForm(const RobotomyRequestForm& obj);
       RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        void execute(Bureaucrat const & executor) const;
         std::string  getTarget()const;
    
};


#endif