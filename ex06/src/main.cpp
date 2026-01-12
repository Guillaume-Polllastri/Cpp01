/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:25:00 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/12 17:23:47 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

#include <string>
#include <iostream>

int main( void )
{
    std::string str;
    Harl    harl;
    
    while (true)
    {
        std::cout << "Enter the level of your choice (DEBUG, INFO, WARNING, ERROR): ";
        std::getline(std::cin, str);
        std::cout << '\n';
        if (std::cin.eof() == 1 || str.empty() || str == "EXIT")
	    {
		    std::cout << '\n';
		    break;
	    }
        harl.complain(str);
    }
    return (0);
}