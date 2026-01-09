/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:23:00 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 10:25:39 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie(std::string name);
	~Zombie();
	void	announce( void );
};

Zombie* newZombie( std::string name );
void    randomChump(std::string name);
