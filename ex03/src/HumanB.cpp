/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:56:19 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/14 16:10:39 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : _weapon(NULL) ,_name(name) {
}

void HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << _weapon->getType() << '\n';
	else
		std::cout << this->_name << " cannot attack (rip)" << '\n';
}

void	HumanB::setWeapon(const Weapon& weapon) {
	this->_weapon = &weapon;
}
