/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:13 by hbalasan          #+#    #+#             */
/*   Updated: 2023/10/10 16:07:13 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	pb;
	std::string	str;

	while (str != "EXIT")
	{
		// COMMAND LIST
		std::cout << "Enter a command >";
		std::getline(std::cin, str);
		if (str == "ADD")
			//
		else if(str == "SEARCH")
			//
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return(0);
		}
	}
	return (0);
}