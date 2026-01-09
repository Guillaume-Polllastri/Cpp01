/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:24:11 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 10:49:14 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie	*zombie;

	zombie = newZombie("toto");
	if (!zombie)
	{
		std::cerr << "Error\nAllocation failed\n";
		return (1);
	}
	zombie->announce();
	delete(zombie);
	randomChump("");
    return (0);
}
