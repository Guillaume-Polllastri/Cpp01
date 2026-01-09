/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:18:33 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 20:35:04 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string& type) {
	this->_type = type;
}

const std::string&	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(const std::string& type)
{
	this->_type = type;
}
