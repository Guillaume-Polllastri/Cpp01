/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:31:00 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/12 18:17:23 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	replace_string(std::string content, std::string s1, std::string s2)
{
	std::string	result;
	size_t		found;
	size_t		pos = 0;

	if (s1.empty())
		return (content);
	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result.append(content, pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result.append(content, pos, content.length() - pos);
	return (result);
}

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
	
	content = replace_string(content, s1, s2);
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
