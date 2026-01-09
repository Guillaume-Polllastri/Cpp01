/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:23:00 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 11:27:44 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie(std::string name);
	Zombie();
	~Zombie();

	void	announce( void ) const;
	void	set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );