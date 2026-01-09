/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:12:53 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 17:01:03 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, const Weapon& weapon) : _weapon(weapon), _name(name) {
}

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << '\n';
}
