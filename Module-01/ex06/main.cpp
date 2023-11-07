/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:55:41 by hbalasan          #+#    #+#             */
/*   Updated: 2023/11/07 15:13:30 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	HarlTranslate(char *level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			return (i);
	return (-1);
}

void	HarlSwitch(Harl &h, char *level)
{
	switch(HarlTranslate(level))
	{
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break ;
		default:
			std::cout << CYAN << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
			break ;
	}
}

int	main(int argc, char **argv)
{
	Harl	h;

	if (argc != 2)
		std::cout << CYAN << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
	else
		HarlSwitch(h, argv[1]);
}