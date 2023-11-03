/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:04:05 by kelmouto          #+#    #+#             */
/*   Updated: 2023/11/02 10:33:11 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{ 
try
{
    Form a("alex", -5, 2);
    Bureaucrat b("bob",10);
    b.signForm(a);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}  
}