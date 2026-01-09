/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:02:01 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 20:33:54 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name) {
    this->_name = name;
    std::cout << "Zombie " << name << " created\n";
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " deleted\n";
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}