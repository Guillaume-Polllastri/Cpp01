/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:58:21 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 20:26:21 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

#include <string>

class HumanB {
private:
	const Weapon*		_weapon;
	std::string			_name;

public:
	HumanB(std::string name);
	void	attack() const;
	void	setWeapon(const Weapon& weapon);
};