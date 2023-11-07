/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:00:06 by hbalasan          #+#    #+#             */
/*   Updated: 2023/11/07 15:00:22 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << CYAN << "Harl has appeared!" << RESET << std::endl;
}

Harl::~Harl()
{
	std::cout << CYAN << "Harl disappeared!" << RESET << std:: endl;
}

void	Harl::debug(void)
{
	std::cout << PURPLE << "[DEBUG]   " << RESET;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << "I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << CYAN << "[INFO]    " << RESET;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING] " << RESET;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << PINK << "[ERROR]   " << RESET;
	std::cout << "This is unacceptable, I want to speak to the manager now." <<
	std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptrComplain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptrComplain[i])();
			break ;
		}
	}
}