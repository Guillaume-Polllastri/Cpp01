/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:25:00 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/12 17:42:02 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

#include <string>
#include <iostream>

int main(int ac, char **av)
{
    Harl    harl;
    
    if (ac != 2)
    {
        std::cerr << "Error\nThe program must have 1 parameter\n";
        return (1);
    }
    std::cout << '\n';
    harl.complain(av[1]);
    return (0);
}