/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:24:11 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/14 10:57:56 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

int main(void)
{
	randomChump("toto");
	Zombie	*zombie;

	zombie = newZombie("tata");
	if (!zombie)
	{
		std::cerr << "Error\nAllocation failed\n";
		return (1);
	}
	zombie->announce();
	delete(zombie);
    return (0);
}
