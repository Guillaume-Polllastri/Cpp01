/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:13:48 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 10:48:57 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

void    randomChump(std::string _name)
{
	if (_name.empty())
	{
		std::cerr << "Error\nZombie name cannot be empty\n";
		return ;		
	}
	Zombie	zombie(_name);
	zombie.announce();
}
