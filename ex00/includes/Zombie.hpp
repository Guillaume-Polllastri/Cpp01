/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:23:00 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 20:33:25 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie(const std::string& name);
	~Zombie();
	void	announce( void );
};

Zombie* newZombie( const std::string& name );
void    randomChump(const std::string& name);
