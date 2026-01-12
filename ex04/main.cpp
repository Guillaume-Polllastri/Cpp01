/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:31:00 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/12 12:59:54 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

// std::string	replace_string(std::string content, std::string s1, std::string s2)
// {
// 	std::string	result;

	
// }

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error\nUsage ./replace filename s1 s2\n";
		return (1);
	}
	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	std::ifstream	infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error\nCould not open file " << filename << '\n';
		return (1);
	}

	std::string	content;
	std::string	line;
	while (std::getline(infile, line))
	{
		content += line;
		if (!infile.eof())
			content += '\n';
	}
	infile.close();

	std::string	outfilename = filename + ".replace";
	std::ofstream	outfile(outfilename.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error\nCannot create file " << outfilename << '\n';
		return (1);
	}
	outfile << content;
	outfile.close();
	return (0);
}
