/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:56:19 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 20:27:18 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _weapon(NULL) ,_name(name) {
}

void HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << '\n';
}

void	HumanB::setWeapon(const Weapon& weapon) {
	this->_weapon = &weapon;
}
