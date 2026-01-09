/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:04:45 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 12:05:58 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	zombieHorde = new Zombie[N];
	
	if (zombieHorde == NULL)
	{
		std::cerr << "Error\nAllocation failed\n";
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		zombieHorde[i].set_name(name);
	return (zombieHorde);
}