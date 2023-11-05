/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:45:12 by hbalasan          #+#    #+#             */
/*   Updated: 2023/11/06 02:02:20 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define YELLOW "\033[0;33m"
#define RESET "\033[0m"

int	replace(char **argv, std::string str)
{
	std::ofstream	outfile;
	int				pos;

	outfile.open((std::string(argv[1]) + ".new").c_str()); // Return const pointer to null-terminated contents.
	if (outfile.fail())
	{
		std::cout << YELLOW << "⚠ Error: couldn't create the outfile" << RESET << std::endl;
		return (1);
	}
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != (int)std::string::npos && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::string		str;
	char			c;

	if (argc != 4)
	{
		std::cout << YELLOW << "⚠ usage: replace <file> <old_str> <new_str>" << RESET << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << YELLOW << "⚠ Error: " << argv[1] << ":" << " no such file or directory" << RESET << std::endl;
		return (1);
	}
	while (!infile.eof() && infile >> std::noskipws >> c) // no skip whitespace
		str += c;
	infile.close();
	replace(argv, str);
}