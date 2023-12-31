/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:13 by hbalasan          #+#    #+#             */
/*   Updated: 2023/10/13 03:46:04 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	pb;
	std::string	str;

	std::cout << "Command List" << std::endl;
	std::cout << "\tADD:\tsave a new contact" << std::endl;
	std::cout << "\tSEARCH:\tdisplay a specific contact" << std::endl;
	std::cout << "\tEXIT" << std::endl;
	while (str != "EXIT")
	{	
		std::cout << "\nEnter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb.add();
		else if(str == "SEARCH")
			pb.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return(0);
		}
	}
	return (0);
}