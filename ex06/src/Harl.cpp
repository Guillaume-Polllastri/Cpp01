/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:11:58 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/12 17:38:28 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>
#include <stdbool.h>

Harl::Harl() {
	this->ptr_complain[0] = &Harl::debug;
	this->ptr_complain[1] = &Harl::info;
	this->ptr_complain[2] = &Harl::warning;
	this->ptr_complain[3] = &Harl::error;
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n\n";
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n\n";
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << "\n\n";
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << "\n\n";
}

void	Harl::complain( std::string level ) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	bool		flag;

	flag = false;
	for (size_t i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			switch (i)
			{
				case 0:
					(this->*ptr_complain[0])();
				case 1:
					(this->*ptr_complain[1])();
				case 2:
					(this->*ptr_complain[2])();
				case 3:
					(this->*ptr_complain[3])();
			}
			flag = true;
		}
	}
	if (flag == false)
		std::cout << "[ Probably complaining about insignificant problems ]\n\n";
}