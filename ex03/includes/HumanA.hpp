/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:58:24 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 21:08:37 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

#include <string>

class HumanA {
private:
	const Weapon&		_weapon;
	std::string	_name;

public:
	HumanA(const std::string& name, const Weapon& weapon);
	void	attack() const;
};
