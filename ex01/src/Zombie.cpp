/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:02:01 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 20:32:05 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name) {
    this->_name = name;
    std::cout << "Zombie " << name << " created\n";
}

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " deleted\n";
}

void	Zombie::announce( void ) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(const std::string& name)
{
	this->_name = name;
}
