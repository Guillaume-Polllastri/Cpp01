/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:24:11 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/09 12:05:35 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

int main(void)
{
	int		N = 5;
	Zombie	*horde = zombieHorde(N, "toto");

	if (horde == NULL)
		return (1);
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie numero " << i + 1 << ":\n";
		horde[i].announce();
	}
	delete [] horde;
    return (0);
}
